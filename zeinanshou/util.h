#ifndef UTIL
#define UTIL

void error(char * msg);
struct id* lookupid(char* id);
void print_child(Node * );
Node * newNode();
void postorder(Node *);
int lookupindex(char *);
Type lookuptype(char *);
int insert(Type ,char *);
void gen_code(FILE *stream,Node *root);
void gen_header(FILE *stream);
void gen_declare_code(FILE *stream,Node *node);
void gen_var_code(FILE *stream);
void gen_asm_code(FILE  *stream,Node *node);
void gen_stmt_code(FILE *stream,Node *node,int true_label,int false_label);
void gen_expr_code(FILE *stream,Node *node,int true_label,int false_label);
void gen_expr1_code(FILE *stream,Node *t);
void gen_expr2_code(FILE *stream,Node *t);
void gen_expr3_code(FILE *stream,Node *t,int true_label,int false_label);

#endif