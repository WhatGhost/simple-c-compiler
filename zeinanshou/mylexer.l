%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018Äê1ÔÂ1ÈÕ
****************************************************************************/

#pragma warning(disable:4996)
#include "myparser.h"
#include "globals.h"
#include "util.h"

#ifndef YYSTYPE
#define YYSTYPE Node *
#endif
int lineno = 1;
struct Node* node;
extern YYSTYPE yylval;

extern void *malloc();

%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// place any declarations here
WS       [ \t]
ENTER    \n

character    '[a-zA-Z]'
number [0-9]+
block_comment   \/\*([^\*\/]|\n)*\*\/
line_comment  \/\/(.)*\n
identifier [a-zA-Z]([a-zA-Z0-9])* 
%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your Lex rules here
"{"			{return LB;}
"}"			{return RB;}
";"			{return SEMI;}
"("			{return LP;}
")"			{return RP;}
"if"		{return IF;}
"else"		{return ELSE;}
"for"		{return FOR;}
"while"		{return WHILE;}
"do"		{return DO;}
"main"		{return MAIN;}
"=="		{return EQ;}
"!="		{return NZ;}
"<="		{return LE;}
">="		{return GE;}
"<"			{return LT;}
">"			{return GT;}
"++"		{return INC;}
"--"		{return DEC;}
"+"			{return PLUS;}
"-"			{return MINUS;}
"*"			{return MUL;}
"/"			{return DIV;}
"%"			{return MOD;}
"="			{return ASSIGN;}
"&"			{return IAND;}
"|"			{return IOR;}
"^"			{return XOR;}
"~"			{return NOT;}
"<<"		{return SHL;}
">>"		{return SHR;}
"&&"		{return AND;}
"||"		{return OR;}
"!"			{return OPPSITE;}
","			{return COMMA;}
"input"		{return INPUT;}
"output"	{return OUTPUT;}
"print"		{return OUTPUT;}
"int"	{return INT;}
"char" {return CHAR;}


{block_comment}		{;}
{line_comment}		{;}

{WS}     {;}
{ENTER}  {lineno++;}
{number}	{
				node=(Node *)malloc(sizeof(Node));;
				node->attr.val=atoi(yytext);
				yylval=node;
				node->type=Int;
				return NUMBER;
			}
{character}	{	node=(Node *)malloc(sizeof(Node));;
				node->attr.val=yytext[1];
				node->type=Char;
				yylval=node;
				return CHARACTER;
			}	
{identifier} {
				node=(Node *)malloc(sizeof(Node));;
				node->attr.name=(char *)malloc(strlen(yytext)+1); 
				strcpy(node->attr.name,yytext);
				yylval=node;
				return ID;}
%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int yywrap()  
{  
    return 1;  
}