#pragma warning(disable:4996)
#include "globals.h"
#include "util.h"

extern int stmtcount;
extern int valcount;
int count=0;
int idcount=0;
int errorno = 0;
int i;
struct id *id_list;
extern int lineno;

void error(char* msg){
	printf("%s\tLine:%d",msg,lineno);
	errorno++;
}
void print_child(Node * father){
	int i;
	printf("Children:");
	for (i=0 ; i < MAXCHILDREN ; i++){
		if(father->child[i]==NULL)
			break;
		else printf("%d ",father->child[i]->index);
	}
	printf("\n");
}

Node * newNode(){
	int i;
	Node * n=(Node *)malloc(sizeof(Node));
	for(i=0;i<MAXCHILDREN;i++){
		n->child[i]=NULL;
	}
	return n;
}

void checknode(Node * node){
	int i;
	for(i=0;i<MAXCHILDREN;i++){
		if(node->child[i]==NULL)
			break;
		else{
			checknode(node->child[i]);
		}
	}
	
	printf("%d:",node->index);
	if(node->nodekind==Stmt){
		//��Stmt
		switch(node->kind.stmt){
		case EmptyK:
			printf("EmptyStatement\t");
			break;
		case DeclareK:		
			//����
			printf("DeclareStatement\t");
			break;
		case WhileK:
			printf("WhileStatement\t");
			break;
		case DowhileK:
			printf("DowhileStatement\t");
			break;
		case ForK:
			printf("ForStatement\t");
			break;
		case AssignKind:
			printf("AssignStatement\t");		
			break;
		case IfK:
			printf("IfStatement\t");
			
			if(node->child[0]->type!=Int)
				printf("�жϱ��ʽ��ƥ��\t");
				
			break;
		case IfElseK:
			printf("IfElseStatement\t");
			

			break;
		case FunctionK:
			printf("FunctionStatement\t");
			break;
		case ExprK:
			printf("ExprStatement:\t");
			break;
		case InputK:
			printf("Input\t");
			break;
		case OutputK:
			printf("Output\t");
			break;
		case StmtsK:
			printf("Statements:\t");
			break;
		default:
			printf("Unknown Statement\t");
		}
		print_child(node);
	}else if(node->nodekind==Expr){
		//��Expr
		switch(node->kind.expr){
		case OpK:
		case OpK3:
			//˫Ŀ�����
			printf("lalala:%d  %d lalala", node->child[0]->type, node->child[1]->type);
			printf("Op:%s\t",node->attr.op);
			break;
		case OpK2:
			printf("Op:%s\t",node->attr.op);
			printf("lalala   ");
			node->type=node->child[0]->type;
			break;
		case ConstK:
			printf("Const:%d\t",node->attr.val);
			break;
		case IdK:
			printf("Identifier:%s\t",node->attr.name);
			if(lookupindex(node->attr.name)>0)
				node->type=lookuptype(node->attr.name);
			break;
		case IdK2:
			//ID---EXPR
			printf("Identifier:%s\t",node->attr.name);
			node->type = lookuptype(node->attr.name);
			break;
		case TypeK:
			printf("Type:");
			switch(node->type){
			case Int:
				printf("int\t");
				break;
			case Char:
				printf("char\t");
				break;
			default:
				printf("unknown\t");
				break;
			}
			break;
		case AssignK:
			printf("Assign\t");			
			break;
		case MainK:
			printf("Main:\t");
			break;
		default:
			printf("UnknownExpression\t");
		}
		print_child(node);
	}
	
}


int lookupindex(char *id)
{
	struct id *list=id_list;
	
	for(;list;list=list->next){
		if(strcmp(list->name,id)==0)
			return list->index;
	}
	return -1;
};

struct id* lookupid(char* id)
{
	struct id *list=id_list;
	
	for(;list;list=list->next){
		if(strcmp(list->name,id)==0)
			return list;
	}
	
	return NULL;
}

Type lookuptype(char *id)
{
	struct id *list=id_list;
	
	for(;list;list=list->next){
		//printf("name:%s,type:%d", list->name, list->type);
		if(strcmp(list->name,id)==0)
			return list->type;
	}
	
	return -1;
}


int insert(Type t,char *id)
{
	struct id *p;
	p=(struct id*) malloc (sizeof(struct id));
	p->next=id_list;
	p->name=(char *)malloc(strlen(id)+1); 
	strcpy(p->name,id);
	p->index=idcount;
	p->type=t;
	p->is_init=0;
	p->value=0;
	idcount++;
	id_list=p;
	printf("insert:%s",id);
	return p->index;
}

//��������
void gen_code(FILE *stream,Node *root)
{
	gen_header(stream);//����ͷ��
	//�����������

	gen_declare_code(stream,root);
	//������ʱ����
	gen_var_code(stream);
		
	fprintf(stream,"\n\t.code\nstart:");
    fprintf(stream,"\n\tcall main\n\tinkey\n\texit\n");
	//fprintf(stream,"\nmain proc\n\n\tcls");
	fprintf(stream,"\nmain proc\n\n\t");
    //���ɻ�����
    gen_asm_code(stream,root->child[1]);
    
    fprintf(stream,"\n\n\tret\nmain endp\n");
    fprintf(stream,"\nend start");
}

void gen_header(FILE *stream)
{
	fprintf(stream,".486\noption casemap :none");
	fprintf(stream,"\n\tinclude \\masm32\\include\\masm32rt.inc\n\tincludelib \\masm32\\lib\\msvcrt.lib");
	fprintf(stream,"\n\t.data");
}

void gen_declare_code(FILE *stream,Node *node)
{
	
	struct id* idlist=id_list;
	for(;idlist;idlist=idlist->next){
		fprintf(stream,"\n\t  _%s DWORD %d",idlist->name,idlist->value);
	}
}


void gen_var_code(FILE *stream)
{	
	for(i=0;i<valcount;i++)   
		fprintf(stream,"\n\t  t%d DWORD 0",i);
}

void gen_asm_code(FILE  *stream,Node *node)
{
	printf("asmcode");
	int i;
	if(node->nodekind==Stmt&&node->kind.stmt!=StmtsK&&node->kind.stmt!=DeclareK){
		gen_stmt_code(stream,node,0,0);
	}else if(node->kind.stmt==StmtsK){
		for(i=0;i<MAXCHILDREN;i++){
			if(node->child[i]==NULL)
				break;
			else{
				gen_stmt_code(stream,node->child[i],0,0);
			}
		}
	}
}

void gen_stmt_code(FILE *stream,Node *node,int true_label,int false_label)
{
	//�������
	if(node->nodekind==Expr){
		gen_expr_code(stream,node,true_label,false_label);
	}else if(node->nodekind==Stmt){
		switch(node->kind.stmt){
		case WhileK:
			//while������3������Ρ��������жϡ���������������������
			if (node->stmtno>=0)  fprintf(stream,"\n@%d:",node->stmtno);
			gen_expr_code(stream, node->child[0],node->stmtno+1,node->stmtno+2);
			fprintf(stream,"\n@%d:",node->stmtno+1);
			if(node->child[1]!=NULL){
				gen_asm_code(stream,node->child[1]);
			}
			fprintf(stream,"\n\t\tjmp @%d",node->stmtno);
			fprintf(stream,"\n@%d:",node->stmtno+2);
			break;
		case ForK:
			//3������Ρ��������жϡ���������������������
			gen_stmt_code(stream,node->child[0],0,0);
			if(node->stmtno>=0)
				fprintf(stream,"\n@%d:",node->stmtno);
			gen_expr_code(stream,node->child[1],node->stmtno+1,node->stmtno+2);
			fprintf(stream,"\n@%d:",node->stmtno+1);
			gen_stmt_code(stream, node->child[3],0,0);
			gen_stmt_code(stream, node->child[2],0,0);
			fprintf(stream,"\n\t\tjmp @%d",node->stmtno);
			fprintf(stream,"\n@%d:",node->stmtno+2);
			break;
		case AssignKind:
			//��child[1]��ֵ������ʱ���������Ĵ�������ֵ��child[0]
			if(node->child[1]->kind.expr == IdK||node->child[1]->kind.expr==IdK2)  fprintf(stream,"\n\t\tMOV eax, _%s",node->child[1]->attr.name);
			else if(node->child[1]->kind.expr == ConstK) fprintf(stream,"\n\t\tMOV eax, %d",node->child[1]->attr.val);
			else {gen_stmt_code(stream,node->child[1],0,0); 
			fprintf(stream,"\n\t\tMOV eax, t%d",node->child[1]->valno); }
			fprintf(stream,"\n\t\tMOV _%s, eax",node->child[0]->attr.name);
			break;
		case IfK:
			//2�Ρ���������ת��ִ��
			gen_expr_code(stream, node->child[0],node->stmtno,node->stmtno+1);
			fprintf(stream,"\n@%d:",node->stmtno);
			gen_asm_code(stream, node->child[1]);
			fprintf(stream,"\n@%d:",node->stmtno+1);
			break;
		case IfElseK:
			//2�Ρ���������ת��ִ�С�
			gen_expr_code(stream, node->child[0],node->stmtno,node->stmtno+1);
			fprintf(stream,"\n@%d:",node->stmtno);
			gen_asm_code(stream, node->child[1]);
			fprintf(stream,"\n\t\tjmp @%d",node->stmtno+2);
			fprintf(stream,"\n@%d:",node->stmtno+1);
			gen_asm_code(stream, node->child[2]);
			fprintf(stream, "\n@%d:", node->stmtno + 2);
			break;
		case InputK:
			//�ж����Ͳ�����
			if(node->child[0]->nodekind==Expr&&(node->child[0]->kind.expr==IdK||node->child[0]->kind.expr==IdK2)){
				if(lookuptype(node->child[0]->attr.name)==Int)
					fprintf(stream,"\n\t\tinvoke crt_scanf,  SADD(\"%%d\",0),addr _%s",node->child[0]->attr.name);
				else if(lookuptype(node->child[0]->attr.name)==Char)
					fprintf(stream,"\n\t\tinvoke crt_scanf,SADD(\"%%c\",0),addr _%s",node->child[0]->attr.name);
			}	
			break;
		case OutputK:
			if(node->child[0]->nodekind == Expr && (node->child[0]->kind.expr==IdK||node->child[0]->kind.expr==IdK2)){
				
				if(lookuptype(node->child[0]->attr.name) ==Int)  fprintf(stream,"\n\t\tinvoke crt_printf, SADD(\"%%d\",13,10), _%s",node->child[0]->attr.name);//idΪint��ʱ
				else if(lookuptype(node->child[0]->attr.name)==Char)  fprintf(stream,"\n\t\tinvoke crt_printf, SADD(\"%%c\",13,10), _%s",node->child[0]->attr.name);//idΪchar��ʱ
			}else if(node->child[0]->nodekind == Expr && node->child[0]->kind.expr == ConstK)
				fprintf(stream,"\n\t\tinvoke crt_printf, SADD(\"%d\",13,10)",node->child[0]->attr.val);
			else {
				gen_expr_code(stream, node->child[0],0,0);
				fprintf(stream,"\n\t\tinvoke crt_printf, SADD(\"%%d\",13,10)");
				fprintf(stream,", t%d",node->child[0]->valno); 
			}
			break;
		case StmtsK:
			//������С�����������gen_asm_code()
			gen_asm_code(stream,node);
			break;
		case ExprK:
			gen_expr_code(stream,node,true_label,false_label);
			break;
		default:
			break;
		}
	}
	
}

void gen_expr_code(FILE *stream,Node *node,int true_label,int false_label){
	printf("Expr_code");
	if(node!=NULL){
		if(node->nodekind==Stmt&&node->kind.stmt!=ExprK)
			gen_stmt_code(stream,node,0,0);
		else if(node->nodekind==Expr&&node->kind.expr==OpK){
			gen_expr1_code(stream,node);
		}else if(node->nodekind==Expr&&node->kind.expr==OpK2){
			gen_expr2_code(stream,node);
			printf("lalala\n");
		}else if(node->nodekind==Expr&&node->kind.expr==OpK3){
			gen_expr3_code(stream,node,true_label,false_label);
		}
	}
}

void gen_expr1_code(FILE *stream,Node *node){
		//˫Ŀ�����
		Node *e1 = node->child[0];
		Node *e2 = node->child[1];
		if(e1->kind.expr != IdK &&e1->kind.expr!=IdK2 && e1->kind.expr != ConstK){    
			//e1�Ǳ��ʽ��������ʽ����
			gen_expr_code(stream,e1,0,0);
			if(e2->kind.expr != IdK && e2->kind.expr!=IdK2 && e2->kind.expr != ConstK) 
			//e2�Ǳ��ʽ��������ʽ����
			gen_expr_code(stream,e2,0,0); 
			//��e1��ʱ���������Ĵ���
			fprintf(stream,"\n\t\tMOV eax, t%d",e1->valno);
		}
		else {
			//e1�Ǳ������߳��� ��e1ֵ����Ĵ���
			if(e2->kind.expr != IdK &&e2->kind.expr!=IdK2&& e2->kind.expr != ConstK)  
				gen_expr_code(stream,e2,0,0);//e2�Ǳ��ʽ���������
			if((e1->kind.expr == IdK ||e1->kind.expr==IdK2) && strcmp(node->attr.op,"=")!=0)      
				fprintf(stream,"\n\t\tMOV eax, _%s",e1->attr.name);
			if(e1->kind.expr == ConstK && strcmp(node->attr.op,"=")!=0 )  
				fprintf(stream,"\n\t\tMOV eax, %d", e1->attr.val);
		}
		if(strcmp(node->attr.op,"*")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           
				fprintf(stream,"\n\t\tIMUL _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK){  fprintf(stream,"\n\t\tMOV ecx, %d" ,e2->attr.val); fprintf(stream,"\n\t\tIMUL ecx");}
			else                               
				fprintf(stream,"\n\t\tIMUL t%d",e2->valno);
			//��������Ϊ��ʱ����
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"/")==0){
			fprintf(stream,"\n\t\tMOV edx, 0");
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tIDIV _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK){  fprintf(stream,"\n\t\tMOV ecx, %d" ,e2->attr.val); fprintf(stream,"\n\t\tIDIV ecx");}
			else                               fprintf(stream,"\n\t\tIDIV t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"+")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tADD eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tADD eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tADD eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"-")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tSUB eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tSUB eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tSUB eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"&")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tAND eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tAND eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tAND eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"|")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tOR  eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tOR  eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tOR  eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"^")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tXOR eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tXOR eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tXOR eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"<<")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tSHL eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tSHL eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tSHL eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,">>")==0){
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tSHR eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tSHR eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tSHR eax, t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
		} else if(strcmp(node->attr.op,"%")==0){
			fprintf(stream,"\n\t\tMOV edx, 0");
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tIDIV _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK){  fprintf(stream,"\n\t\tMOV ecx, %d" ,e2->attr.val); fprintf(stream,"\n\t\tIDIV ecx");}
			else                               fprintf(stream,"\n\t\tIDIV t%d",e2->valno);
			fprintf(stream,"\n\t\tMOV t%d, edx",node->valno);
		} else if(strcmp(node->attr.op,"=")==0){  
			if (e2->kind.expr == IdK||e2->kind.expr == IdK2)           fprintf(stream,"\n\t\tMOV eax, _%s",e2->attr.name);
			else if (e2->kind.expr == ConstK)   fprintf(stream,"\n\t\tMOV eax, %d" ,e2->attr.val);
			else                               fprintf(stream,"\n\t\tMOV eax, t%d",e2->valno); 
			fprintf(stream,"\n\t\tMOV _%s, eax",e1->attr.name);//��ֵ����e1
		}
}

void gen_expr2_code(FILE *stream,Node *node){
printf("lalala123\n");
	//��Ŀ�����
	Node *e1 = node->child[0];
	if(strcmp(node->attr.op,"minus")==0){
		if(e1->kind.expr != IdK && e1->kind.expr!=IdK2 && e1->kind.expr != ConstK){ 
			//���ʽ �����Ϊ��ʱ����
			gen_expr_code(stream,e1,0,0);
			fprintf(stream,"\n\t\tMOV eax, t%d",e1->valno);
			fprintf(stream,"\n\t\tNEG eax");
			fprintf(stream,"\n\t\tMOV t%d, eax",node->valno); }
		if(e1->kind.expr == IdK ||e1->kind.expr==IdK2){
				//id
				fprintf(stream,"\n\t\tMOV eax, _%s",e1->attr.name);
				fprintf(stream,"\n\t\tNEG eax");
				fprintf(stream,"\n\t\tMOV t%d, eax",node->valno); }
		if(e1->kind.expr == ConstK){
				//����
				fprintf(stream,"\n\t\tMOV eax, %d", e1->attr.val); 
				fprintf(stream,"\n\t\tNEG eax");
				fprintf(stream,"\n\t\tMOV t%d, eax",node->valno); }
	}
	else{
		if(strcmp(node->attr.op,"++")==0) printf("hahaha");   fprintf(stream,"\n\t\tINC _%s",e1->attr.name);//����Ϊ++ʱ
		if(strcmp(node->attr.op,"--")==0)    fprintf(stream,"\n\t\tDEC _%s",e1->attr.name);//����Ϊ--ʱ
		fprintf(stream,"\n\t\tMOV eax, _%s",e1->attr.name);
		fprintf(stream,"\n\t\tMOV t%d, eax",node->valno);
	}
}

void gen_expr3_code(FILE *stream,Node *node,int true_label,int false_label){
	//�Ƚ�ʽ
	Node *e1 = node->child[0];
	Node *e2 = node->child[1]; 
	if(strcmp(node->attr.op,"!")==0){
			//��opΪ���ǡ�ʱ������������false_label��ǵĳ���Σ�������������true_label��ǵĳ����
			gen_expr_code(stream,e1,false_label,true_label);
	}else if(strcmp(node->attr.op,"&&")==0){
			//e1��ȷ������node->stmtno�飬������e2���жϣ�e2Ҳ��ȷ������true_label
			gen_expr_code(stream,e1,node->stmtno,false_label);
			fprintf(stream,"\n@%d:",node->stmtno);
			gen_expr_code(stream,e2,true_label,false_label);
	}else if(strcmp(node->attr.op,"||")==0){
			//e1��ȷ������true_label �������e2���ж� e2��ȷ��true ����ȷ����false
			gen_expr_code(stream,e1,true_label,node->stmtno);
			fprintf(stream,"\n@%d:",node->stmtno);
			gen_expr_code(stream,e2,true_label,false_label);
	}else {
		//�������
		if(e1->kind.expr != IdK &&e1->kind.expr!=IdK2&& e1->kind.expr != ConstK){    
			//e1����id������������ʽ����
			gen_expr_code(stream,e1,0,0);                      
			if(e2->kind.expr != IdK && e2->kind.expr != ConstK) 
				//e2����id������������ʽ����
				gen_expr_code(stream,e2,0,0);              
			fprintf(stream,"\n\t\tMOV eax, t%d",e1->valno);		//��e1��ʱ��������eax
		}
		else {
			//e1��id���߳���ʱ����e2�����
			if(e2->kind.expr != IdK && e2->kind.expr!=IdK2 && e2->kind.expr != ConstK)  gen_expr_code(stream,e2,0,0);
			if(e1->kind.expr == IdK||e1->kind.expr == IdK2)		fprintf(stream,"\n\t\tMOV eax, _%s",e1->attr.name);//��e1��ֵ����eax
			if(e1->kind.expr == ConstK)              fprintf(stream,"\n\t\tMOV eax, %d", e1->attr.val);}
			
			if(e2->kind.expr == IdK||e2->kind.expr == IdK2)            
				fprintf(stream,"\n\t\tCMP eax, _%s",e2->attr.name);//e2��e1�ıȽ�
			else if (e2->kind.expr == ConstK)   
				fprintf(stream,"\n\t\tCMP eax, %d" ,e2->attr.val);
			else	
				fprintf(stream,"\n\t\tCMP eax, t%d",e2->valno); 
			
			//����ת��ָ��
			if(strcmp(node->attr.op,"<")==0)     fprintf(stream,"\n\t\tJL");
			if(strcmp(node->attr.op,">")==0)     fprintf(stream,"\n\t\tJNLE");
			if(strcmp(node->attr.op,"<=")==0)    fprintf(stream,"\n\t\tJLE");
			if(strcmp(node->attr.op,">=")==0)    fprintf(stream,"\n\t\tJNL");
			if(strcmp(node->attr.op,"==")==0)    fprintf(stream,"\n\t\tJE");
			if(strcmp(node->attr.op,"!=")==0)    fprintf(stream,"\n\t\tJNE");
			fprintf(stream," @%d",true_label);//trueʱ ��ת��true_label�����
			fprintf(stream,"\n\t\tjmp @%d",false_label);       //������ת��false_label�����
	}
}