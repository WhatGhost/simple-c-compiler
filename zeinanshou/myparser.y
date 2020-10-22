%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018年1月1日
****************************************************************************/

#pragma warning(disable:4996)
#include "mylexer.h"
#include "globals.h"
#include "util.h"

#ifndef YYSTYPE
#define YYSTYPE Node*
#endif
extern int errorno;
YYSTYPE yylval;
extern void *malloc();
struct id *id_list;
Node* root;
int count;
int temp;
int Nowtype=NotType;
int temp2;
int i;
int valcount;
int stmtcount;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// attribute type

// place any declarations here
%token LB RB LP RP SEMI 

%token PLUS MINUS MUL DIV EQ NZ LE GE LT GT INC DEC MOD ASSIGN IAND IOR XOR NOT SHL SHR AND OR OPPSITE CHARACTER UMINUS
%token INT CHAR NUMBER ID COMMA 
%token FOR WHILE DO IF ELSE MAIN INPUT OUTPUT

%left OR
%left AND
%left IOR
%left XOR
%left IAND
%left EQ NZ
%left LE GE LT GT
%left SHL SHR
%left PLUS MINUS
%left MUL DIV MOD
%right INC DEC NOT OPPSITE UMINUS

%nonassoc IFX 
%nonassoc ELSE

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)

functionmain:	MAINF LP RP LB stmt_list RB	{
																$$=newNode();
																$$->index=count++;
																$$->nodekind=Stmt;
																$$->kind.stmt=FunctionK;
																$$->child[0]=$1;
																$$->child[1]=$5;
																root=$$;
															}
			;

stmt_list:   stmts	{
						$$=newNode();
						$$->index=count++;
						$$->nodekind=Stmt;
						$$->kind.stmt=StmtsK;
						for(i=0;i<MAXCHILDREN;i++){
							if($1->child[i]==NULL)
								break;
							else
							{
								$$->child[i]=$1->child[i];
								$1->child[i]=NULL;
							}
						}
					}
		;
stmts:		stmt stmts	{
								$$=newNode();
								$$->child[0]=$1;
								for(i=0;i<MAXCHILDREN;i++){
									if($2->child[i]==NULL)
										break;
									else
									{
										$$->child[i+1]=$2->child[i];
										$2->child[i]=NULL;
									}
								}
							}
        | 	stmt  			{ 
								$$=newNode();
								$$->child[0]=$1;
							}
        ;

		
stmt	:	declare_stmt SEMI{$$=$1;}
		|	assign_stmt	SEMI{$$=$1;}
		|	LB stmt_list RB	{$$=$2;}
		|	if_stmt{$$=$1;}
		|	while_stmt{$$=$1;}
		|	for_stmt{$$=$1;}
		|	dowhile_stmt{$$=$1;}
		|	expr SEMI{
						$$=$1;
					}
		|	SEMI	{
						$$=newNode();
						$$->nodekind=Stmt;
						$$->index=count++;
						$$->kind.stmt=EmptyK;
					}
		|	LB RB	{
								$$=newNode();
								$$->nodekind=Stmt;
								$$->index=count++;
								$$->kind.stmt=EmptyK;
							}
		|   output_stmt	SEMI {	$$=$1;	}
		|	input_stmt SEMI	{	$$=$1;	}
		;

declare_stmt:	type_expr declare	{
											$$=newNode();
											$$->nodekind=Stmt;
											$$->index=count++;
											$$->kind.stmt=DeclareK;
											$$->child[0]=$1;
											$$->child[1]=$2;
											//
											if($$->child[1]->child[0]==NULL){
												$$->child[1]->type=$$->child[0]->type;
											}else{
												$$->child[1]->child[0]->type=$$->child[0]->type;
											}
										}
			|
				type_expr declare other_declare {
														$$=newNode();
														$$->index=count++;
														$$->nodekind=Stmt;
														$$->kind.stmt=DeclareK;
														$$->child[0]=$1;
														$$->child[1]=$2;
														if($$->child[1]->child[0]==NULL){
															$$->child[1]->type=$$->child[0]->type;
														}else{
															$$->child[1]->child[0]->type=$$->child[0]->type;
														}
														for(i=0;i<MAXCHILDREN;i++){
															if($3->child[i]==NULL)
																break;
															else
															{
																	if($3->child[i]->child[0]==NULL){
																		$3->child[i]->type=$$->child[0]->type;
																	}else{
																		$3->child[i]->child[0]->type=$$->child[0]->type;
																	}
																	$$->child[i+2]=$3->child[i];
																	$3->child[i]=NULL;
															}
														}
													}
													
			
			;
type_expr	:	INT		{
							$$=newNode();
							$$->nodekind=Expr;
							$$->index=count++;
							$$->kind.expr=TypeK;
							$$->type=Int;
							Nowtype=Int;
						}
			|	CHAR	{
							$$=newNode();
							$$->nodekind=Expr;
							$$->index=count++;
							$$->kind.expr=TypeK;
							$$->type=Char;
							Nowtype=Char;
						}
			;
			
declare		:	id_expr2 ASSIGN expr	{
										$$=newNode();
										$$->nodekind=Expr;
										$$->index=count++;
										$$->kind.expr=AssignK;
										$$->attr.op=(char *)malloc(strlen("=")+1); 
										strcpy($$->attr.op,"=");
										$$->child[0]=$1;
										$$->child[1]=$3;
										lookupid($1->attr.name)->is_init=1;
										$$->type=$1->type;
										lookupid($1->attr.name)->value = $3->value;
										//printf("fuzhi:%d=%d",lookupid($1->attr.name)->value , $3->value);
									}
			|	id_expr2	{$$=$1;}
			;
other_declare:	COMMA declare other_declare	{
												$$=newNode();
												$$->child[0]=$2;
												for(i=0;i<MAXCHILDREN;i++){
													if($3->child[i]==NULL)
														break;
													else
													{
														$$->child[i+1]=$3->child[i];
														$3->child[i]=NULL;
													}
												}
											}
			|	COMMA declare 	{
									$$=newNode();
									$$->child[0]=$2;
								}
			;

if_stmt		:	IF LP expr RP stmt %prec IFX
			{
				$$=newNode();
				$$->index=count++;
				$$->nodekind=Stmt;
				$$->kind.stmt=IfK;
				$$->child[0]=$3;
				if ($5!=NULL) $$->child[1]=$5;
				$$->stmtno=stmtcount;
				stmtcount+=2;
			}
			|	IF LP expr RP stmt ELSE stmt
			{
				$$=newNode();
				$$->index=count++;
				$$->nodekind=Stmt;
				$$->kind.stmt=IfElseK;
				$$->child[0]=$3;
				i=1;
				if ($5!=NULL) $$->child[i++]=$5;
				if ($7!=NULL) $$->child[i++]=$7;
				$$->stmtno=stmtcount;
				stmtcount+=2;
			}
			;
			
while_stmt  :	WHILE LP expr RP stmt	{
													$$=newNode();
													$$->nodekind=Stmt;
													$$->index=count++;
													$$->kind.stmt=WhileK;
													$$->child[0]=$3;
													if ($5!=NULL) $$->child[1]=$5;
													$$->stmtno=stmtcount;
													stmtcount+=3;
												}
			;

dowhile_stmt:	DO stmt WHILE LP expr RP	{
														$$=newNode();
														$$->nodekind=Stmt;
														$$->index=count++;
														$$->kind.stmt=DowhileK;
														$$->child[1]=$5;
														if ($2!=NULL) $$->child[0]=$2;
														
													}
			;

for_stmt	:	FOR LP infor_stmt SEMI for_expr SEMI infor_stmt RP stmt	{
																							$$=newNode();
																							$$->nodekind=Stmt;
																							$$->index=count++;
																							$$->kind.stmt=ForK;
																							temp2=0;
																							if ($3!=NULL) $$->child[temp2++]=$3;
																							if ($5!=NULL) $$->child[temp2++]=$5;
																							if ($7!=NULL) $$->child[temp2++]=$7;
																							if ($9!=NULL) $$->child[temp2++]=$9;
																							$$->stmtno=stmtcount;
																							stmtcount+=3;
																						}
			;
			
for_expr	:	expr	{
							$$=$1;
							
						}
			|			{
							$$=newNode();
							$$->index=count++;
							$$->nodekind=Stmt;
							$$->kind.stmt=EmptyK;
						}
			;
			
infor_stmt	:	assign_stmt	{
								$$=$1;
							}
			|	declare_stmt{
								$$=$1;
							}
			|	expr		{
								$$=$1;
							}
			|				{
								$$=newNode();
								$$->index=count++;
								$$->nodekind=Stmt;
								$$->kind.stmt=EmptyK;
							}
			;

assign_stmt :	id_expr1 ASSIGN expr {
											$$=newNode();
											$$->index=count++;
											$$->nodekind=Stmt;
											$$->kind.stmt=AssignKind;
											$$->child[0]=$1;
											$$->child[1]=$3;
											$$->type=$1->type;
											if(lookupid($1->attr.name)==NULL)
												error("变量未定义");
											else{
											//lookupid($1->attr.name)->value = $3->value;
											//printf("fuzhi:%d=%d",lookupid($1->attr.name)->value , $3->value);
											lookupid($1->attr.name)->is_init = 1;
											}
											
										} 
			;
			
input_stmt	:	INPUT LP id_expr1 RP	{
											$$=newNode();
											$$->index=count++;
											$$->nodekind=Stmt;
											$$->kind.stmt=InputK;
											$$->child[0]=$3;
										}
			;
output_stmt :	OUTPUT LP expr RP	{
												$$=newNode();
												$$->index=count++;
												$$->nodekind=Stmt;
												$$->kind.stmt=OutputK;
												$$->child[0]=$3;
											}
			;
			
id_expr1		:	ID	{
						$$=newNode();
						$$->index=count++;
						$$->nodekind=Expr;
						$$->kind.expr=IdK;
						$$->attr.name=(char *)malloc(strlen(yylval->attr.name)+1); 
						strcpy($$->attr.name,yylval->attr.name);
						$$->type=lookuptype($$->attr.name);
						//insert(NotType,$$->attr.name);
						if(lookupid($$->attr.name)==NULL)
							error("变量未声明");
					}
			;
				
id_expr2		:	ID	{
						$$=newNode();
						$$->index=count++;
						$$->nodekind=Expr;
						$$->kind.expr=IdK;
						$$->attr.name=(char *)malloc(strlen(yylval->attr.name)+1); 
						strcpy($$->attr.name,yylval->attr.name);
						insert(Nowtype,$$->attr.name);
					}
			;
				
expr	:	expr PLUS expr	{
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("+")+1); 
								strcpy($$->attr.op,"+");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								$$->type=Int;
								valcount++;
								$$->value=$1->value+$3->value;
							}
		|	expr MINUS expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("-")+1); 
								strcpy($$->attr.op,"-");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->type=Int;
								$$->valno=valcount;
								valcount++;
								$$->value=$1->value-$3->value;
							}
		|	expr MUL expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("*")+1); 
								strcpy($$->attr.op,"*");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->type=Int;
								$$->valno=valcount;
								valcount++;
								$$->value=$1->value*$3->value;
							}
		|	expr DIV expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("/")+1); 
								strcpy($$->attr.op,"/");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->type=Int;
								$$->valno=valcount;
								valcount++;
								$$->value=$1->value/$3->value;
							}
		|	expr EQ expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("==")+1); 
								strcpy($$->attr.op,"==");
								$$->child[0]=$1;
								$$->type=Int;
								$$->child[1]=$3;
								if($1->value==$3->value)
									$$->value=1;
								else
									$$->value=0;
							}
		|	expr NZ expr    {	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("!=")+1); 
								strcpy($$->attr.op,"!=");
								$$->child[0]=$1;
								$$->type=Int;
								$$->child[1]=$3;
								if($1->value!=$3->value)
									$$->value=1;
								else
									$$->value=0;
							}
		| 	expr LE expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("<=")+1); 
								strcpy($$->attr.op,"<=");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->type=Int;
								if($1->value<=$3->value)
									$$->value=1;
								else
									$$->value=0;
							}
		|	expr GE expr 	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen(">=")+1); 
								strcpy($$->attr.op,">=");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->type=Int;
								if($1->value>=$3->value)
									$$->value=1;
								else
									$$->value=0;
							}
		|	expr LT expr 	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("<")+1); 
								strcpy($$->attr.op,"<");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->type=Int;
								if($1->value<$3->value)
									$$->value=1;
								else
									$$->value=0;
							}
		|	expr GT expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen(">")+1); 
								strcpy($$->attr.op,">");
								$$->child[0]=$1;
								$$->type=Int;
								$$->child[1]=$3;
								if($1->value>$3->value)
									$$->value=1;
								else
									$$->value=0;
							}
		|	expr INC		{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK2;
								$$->attr.op=(char *)malloc(strlen("++")+1); 
								strcpy($$->attr.op,"++");
								$$->child[0]=$1;
								$$->valno=valcount;
								$$->type=Int;
								valcount++;
								$$->value=$2->value+1;
							}
		| 	expr DEC		{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK2;
								$$->attr.op=(char *)malloc(strlen("--")+1); 
								strcpy($$->attr.op,"--");
								$$->child[0]=$1;
								$$->valno=valcount;
								$$->type=Int;
								valcount++;
								$$->value=$2->value-1;
							}
		|	expr MOD expr 	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("%")+1); 
								strcpy($$->attr.op,"%");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								valcount++;
								$$->type=Int;
								$$->value=$1->value%$3->value;
							}
		|	expr IAND expr 	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("&")+1); 
								strcpy($$->attr.op,"&");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								$$->type=Int;
								valcount++;
								$$->value=$1->value&$3->value;
							}
		|	expr IOR expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("|")+1); 
								strcpy($$->attr.op,"|");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								valcount++;
								$$->type=Int;
								$$->value=$1->value|$3->value;
							}
		| 	expr XOR expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("^")+1); 
								strcpy($$->attr.op,"^");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								valcount++;
								$$->type=Int;
								$$->value=$1->value^$3->value;
							}
		|	NOT expr		{	$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK2;
								$$->attr.op=(char *)malloc(strlen("~")+1); 
								strcpy($$->attr.op,"~");
								$$->child[0]=$2;
								$$->type=Int;
								$$->value=~$2->value;
							}
		|	expr SHL expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen("<<")+1); 
								strcpy($$->attr.op,"<<");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								$$->type=Int;
								valcount++;
								$$->value=$1->value<<$3->value;
							}
		|	expr SHR expr 	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK;
								$$->attr.op=(char *)malloc(strlen(">>")+1); 
								strcpy($$->attr.op,">>");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->valno=valcount;
								$$->type=Int;
								valcount++;
								$$->value=$1->value>>$3->value;
							}
		|	expr AND expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("&&")+1); 
								strcpy($$->attr.op,"&&");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->stmtno=stmtcount;
								$$->type=Int;
								stmtcount++;
								$$->value=$1->value&&$3->value;
							}
		|	expr OR expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("||")+1); 
								strcpy($$->attr.op,"||");
								$$->child[0]=$1;
								$$->child[1]=$3;
								$$->stmtno=stmtcount;
								$$->type=Int;
								stmtcount++;
								$$->value=$1->value||$3->value;
							}
		|	OPPSITE	expr	{	
								$$=newNode();
								$$->nodekind=Expr;
								$$->index=count++;
								$$->kind.expr=OpK3;
								$$->attr.op=(char *)malloc(strlen("!")+1); 
								strcpy($$->attr.op,"!");
								$$->child[0]=$2;
								if($2->value!=0)
									$$->value=0;
								else
									$$->value=1;
							}
		| 	LP expr RP	{
									$$=$2;
								}
		|	NUMBER			{	
								$$=newNode();
								$$->index=count++;
								$$->nodekind=Expr;
								$$->kind.expr=ConstK;
								$$->attr.val=yylval->attr.val;
								$$->value = yylval->attr.val;
								$$->type=Int;
							}
		|	ID 				{	
								$$=newNode();
								$$->index=count++;
								$$->nodekind=Expr;
								$$->kind.expr=IdK2;
								$$->attr.name=(char *)malloc(strlen(yylval->attr.name)+1); 
								$$->type=lookuptype($$->attr.name);
								strcpy($$->attr.name,yylval->attr.name);
								//printf("%s    ,%d    ",yylval->attr.name,lookupid($$->attr.name)==NULL);
								$$->value=lookupid($$->attr.name)->value;
								if(lookupid($$->attr.name)==NULL)
									error("变量未声明");
								else if(lookupid($$->attr.name)->is_init==0)
									error("变量未初始化");
							}
		|	CHARACTER		{
								$$=newNode();
								$$->index=count++;
								$$->nodekind=Expr;
								$$->kind.expr=ConstK;
								$$->attr.val=yylval->attr.val;
								$$->value = yylval->attr.val;
								$$->type=Char;
							}
		|	MINUS expr %prec UMINUS	{
										$$=newNode();
										$$->index=count++;
										$$->nodekind=Expr;
										$$->kind.expr=OpK2;
										$$->attr.op=(char *)malloc(strlen("minus")+1); 
										strcpy($$->attr.op,"minus");
										$$->child[0]=$2;
										$$->valno=valcount;
										$$->value = -$2->value;
										valcount++;
									}
									
		;
MAINF	:	MAIN			{
								$$=newNode();
								$$->index=count++;
								$$->nodekind=Expr;
								$$->kind.expr=MainK;
							}
		;

%%

/////////////////////////////////////////////////////////////////////////////
// programs section


int main(void)
{
	FILE *stream;
	count=0;
	temp=0;
	yyin=fopen("D:\\tmp.c","r");
	yyparse();
	fclose(yyin);
	if(errorno==0){
		checknode(root);
		stream = fopen("D:\\out.asm","wt");	
		gen_code(stream,root);
		fclose(stream);
	}
	
	system("pause");
}
