#ifndef GLOBAL
#define GLOBAL 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHILDREN 10

typedef enum {Stmt,Expr} NodeKind;
typedef enum {EmptyK,DeclareK,WhileK,DowhileK,ForK,AssignKind,IfK,IfElseK,FunctionK,ExprK,StmtsK,InputK,OutputK} StmtKind;
typedef enum {OpK,ConstK,IdK,TypeK,AssignK,MainK,OpK2,IdK2,OpK3} ExprKind;
typedef enum {Int,Char,NotType} Type;

typedef struct Node
   { struct Node * child[MAXCHILDREN];
     int index;
     int value;
     NodeKind nodekind;
     union { StmtKind stmt; ExprKind expr;} kind;
     union { char * op;
             int val;
             char * name;} attr;
     Type type;
     int valno;
     int stmtno;
   }Node;

struct id{
	char *name;
	int index;
  Type type;
  int is_init;
  int value;
	struct id *next;
};

#endif