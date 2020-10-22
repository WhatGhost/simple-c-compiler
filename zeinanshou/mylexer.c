/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 113 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.c
* C source file generated from mylexer.l.
* 
* Date: 01/01/18
* Time: 22:39:17
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\mylexer.l"

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


#line 64 "mylexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\mylexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 43 ".\\mylexer.l"
return LB;
#line 185 "mylexer.c"
		}
		break;
	case 2:
		{
#line 44 ".\\mylexer.l"
return RB;
#line 192 "mylexer.c"
		}
		break;
	case 3:
		{
#line 45 ".\\mylexer.l"
return SEMI;
#line 199 "mylexer.c"
		}
		break;
	case 4:
		{
#line 46 ".\\mylexer.l"
return LP;
#line 206 "mylexer.c"
		}
		break;
	case 5:
		{
#line 47 ".\\mylexer.l"
return RP;
#line 213 "mylexer.c"
		}
		break;
	case 6:
		{
#line 48 ".\\mylexer.l"
return IF;
#line 220 "mylexer.c"
		}
		break;
	case 7:
		{
#line 49 ".\\mylexer.l"
return ELSE;
#line 227 "mylexer.c"
		}
		break;
	case 8:
		{
#line 50 ".\\mylexer.l"
return FOR;
#line 234 "mylexer.c"
		}
		break;
	case 9:
		{
#line 51 ".\\mylexer.l"
return WHILE;
#line 241 "mylexer.c"
		}
		break;
	case 10:
		{
#line 52 ".\\mylexer.l"
return DO;
#line 248 "mylexer.c"
		}
		break;
	case 11:
		{
#line 53 ".\\mylexer.l"
return MAIN;
#line 255 "mylexer.c"
		}
		break;
	case 12:
		{
#line 54 ".\\mylexer.l"
return EQ;
#line 262 "mylexer.c"
		}
		break;
	case 13:
		{
#line 55 ".\\mylexer.l"
return NZ;
#line 269 "mylexer.c"
		}
		break;
	case 14:
		{
#line 56 ".\\mylexer.l"
return LE;
#line 276 "mylexer.c"
		}
		break;
	case 15:
		{
#line 57 ".\\mylexer.l"
return GE;
#line 283 "mylexer.c"
		}
		break;
	case 16:
		{
#line 58 ".\\mylexer.l"
return LT;
#line 290 "mylexer.c"
		}
		break;
	case 17:
		{
#line 59 ".\\mylexer.l"
return GT;
#line 297 "mylexer.c"
		}
		break;
	case 18:
		{
#line 60 ".\\mylexer.l"
return INC;
#line 304 "mylexer.c"
		}
		break;
	case 19:
		{
#line 61 ".\\mylexer.l"
return DEC;
#line 311 "mylexer.c"
		}
		break;
	case 20:
		{
#line 62 ".\\mylexer.l"
return PLUS;
#line 318 "mylexer.c"
		}
		break;
	case 21:
		{
#line 63 ".\\mylexer.l"
return MINUS;
#line 325 "mylexer.c"
		}
		break;
	case 22:
		{
#line 64 ".\\mylexer.l"
return MUL;
#line 332 "mylexer.c"
		}
		break;
	case 23:
		{
#line 65 ".\\mylexer.l"
return DIV;
#line 339 "mylexer.c"
		}
		break;
	case 24:
		{
#line 66 ".\\mylexer.l"
return MOD;
#line 346 "mylexer.c"
		}
		break;
	case 25:
		{
#line 67 ".\\mylexer.l"
return ASSIGN;
#line 353 "mylexer.c"
		}
		break;
	case 26:
		{
#line 68 ".\\mylexer.l"
return IAND;
#line 360 "mylexer.c"
		}
		break;
	case 27:
		{
#line 69 ".\\mylexer.l"
return IOR;
#line 367 "mylexer.c"
		}
		break;
	case 28:
		{
#line 70 ".\\mylexer.l"
return XOR;
#line 374 "mylexer.c"
		}
		break;
	case 29:
		{
#line 71 ".\\mylexer.l"
return NOT;
#line 381 "mylexer.c"
		}
		break;
	case 30:
		{
#line 72 ".\\mylexer.l"
return SHL;
#line 388 "mylexer.c"
		}
		break;
	case 31:
		{
#line 73 ".\\mylexer.l"
return SHR;
#line 395 "mylexer.c"
		}
		break;
	case 32:
		{
#line 74 ".\\mylexer.l"
return AND;
#line 402 "mylexer.c"
		}
		break;
	case 33:
		{
#line 75 ".\\mylexer.l"
return OR;
#line 409 "mylexer.c"
		}
		break;
	case 34:
		{
#line 76 ".\\mylexer.l"
return OPPSITE;
#line 416 "mylexer.c"
		}
		break;
	case 35:
		{
#line 77 ".\\mylexer.l"
return COMMA;
#line 423 "mylexer.c"
		}
		break;
	case 36:
		{
#line 78 ".\\mylexer.l"
return INPUT;
#line 430 "mylexer.c"
		}
		break;
	case 37:
		{
#line 79 ".\\mylexer.l"
return OUTPUT;
#line 437 "mylexer.c"
		}
		break;
	case 38:
		{
#line 80 ".\\mylexer.l"
return OUTPUT;
#line 444 "mylexer.c"
		}
		break;
	case 39:
		{
#line 81 ".\\mylexer.l"
return INT;
#line 451 "mylexer.c"
		}
		break;
	case 40:
		{
#line 82 ".\\mylexer.l"
return CHAR;
#line 458 "mylexer.c"
		}
		break;
	case 41:
		{
#line 85 ".\\mylexer.l"
;
#line 465 "mylexer.c"
		}
		break;
	case 42:
		{
#line 86 ".\\mylexer.l"
;
#line 472 "mylexer.c"
		}
		break;
	case 43:
		{
#line 88 ".\\mylexer.l"
;
#line 479 "mylexer.c"
		}
		break;
	case 44:
		{
#line 89 ".\\mylexer.l"
lineno++;
#line 486 "mylexer.c"
		}
		break;
	case 45:
		{
#line 90 ".\\mylexer.l"

				node=(Node *)malloc(sizeof(Node));;
				node->attr.val=atoi(yytext);
				yylval=node;
				node->type=Int;
				return NUMBER;
			
#line 499 "mylexer.c"
		}
		break;
	case 46:
		{
#line 97 ".\\mylexer.l"
	node=(Node *)malloc(sizeof(Node));;
				node->attr.val=yytext[1];
				node->type=Char;
				yylval=node;
				return CHARACTER;
			
#line 511 "mylexer.c"
		}
		break;
	case 47:
		{
#line 103 ".\\mylexer.l"

				node=(Node *)malloc(sizeof(Node));;
				node->attr.name=(char *)malloc(strlen(yytext)+1); 
				strcpy(node->attr.name,yytext);
				yylval=node;
				return ID;
#line 523 "mylexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 252;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 4, 1 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 16, 16 },
	{ 52, 27 },
	{ 60, 41 },
	{ 41, 15 },
	{ 43, 18 },
	{ 44, 18 },
	{ 65, 53 },
	{ 0, 41 },
	{ 42, 15 },
	{ 53, 27 },
	{ 66, 53 },
	{ 40, 14 },
	{ 3, 1 },
	{ 5, 1 },
	{ 46, 20 },
	{ 47, 20 },
	{ 48, 23 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 49, 24 },
	{ 15, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 16, 1 },
	{ 50, 25 },
	{ 17, 1 },
	{ 18, 1 },
	{ 19, 1 },
	{ 20, 1 },
	{ 51, 26 },
	{ 37, 7 },
	{ 54, 28 },
	{ 55, 29 },
	{ 56, 30 },
	{ 57, 31 },
	{ 58, 33 },
	{ 59, 38 },
	{ 36, 5 },
	{ 61, 42 },
	{ 62, 48 },
	{ 63, 50 },
	{ 64, 51 },
	{ 39, 12 },
	{ 67, 54 },
	{ 68, 55 },
	{ 69, 56 },
	{ 70, 57 },
	{ 71, 60 },
	{ 72, 62 },
	{ 73, 63 },
	{ 74, 65 },
	{ 75, 67 },
	{ 76, 68 },
	{ 77, 69 },
	{ 78, 70 },
	{ 79, 74 },
	{ 80, 76 },
	{ 81, 77 },
	{ 82, 78 },
	{ 83, 80 },
	{ 22, 1 },
	{ 45, 19 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 23, 1 },
	{ 24, 1 },
	{ 25, 1 },
	{ 26, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 27, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 28, 1 },
	{ 0, 0 },
	{ 29, 1 },
	{ 30, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 31, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 32, 1 },
	{ 33, 1 },
	{ 34, 1 },
	{ 35, 1 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 21, 83 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 },
	{ 38, 8 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 83, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 43 },
	{ 0, 0, 44 },
	{ 0, 2, 34 },
	{ 0, 0, 24 },
	{ 0, 18, 26 },
	{ 0, 129, 0 },
	{ 0, 0, 4 },
	{ 0, 0, 5 },
	{ 0, 0, 22 },
	{ 0, 25, 20 },
	{ 0, 0, 35 },
	{ 0, -22, 21 },
	{ 0, -27, 23 },
	{ 0, -45, 45 },
	{ 0, 0, 3 },
	{ 0, -44, 16 },
	{ 0, 26, 25 },
	{ 0, -35, 17 },
	{ 83, 0, 47 },
	{ 0, 0, 28 },
	{ 83, -76, 47 },
	{ 83, -73, 47 },
	{ 83, -58, 47 },
	{ 83, -56, 47 },
	{ 83, -89, 47 },
	{ 83, -40, 47 },
	{ 83, -59, 47 },
	{ 83, -55, 47 },
	{ 83, -44, 47 },
	{ 0, 0, 1 },
	{ 0, -63, 27 },
	{ 0, 0, 2 },
	{ 0, 0, 29 },
	{ 0, 0, 13 },
	{ 0, 0, 32 },
	{ 0, 23, 0 },
	{ 0, 0, 18 },
	{ 0, 0, 19 },
	{ -41, -28, 0 },
	{ -42, 54, 0 },
	{ 0, 0, 30 },
	{ 0, 0, 14 },
	{ 0, 0, 12 },
	{ 0, 0, 15 },
	{ 0, 0, 31 },
	{ 83, -32, 47 },
	{ 83, 0, 10 },
	{ 83, -49, 47 },
	{ 83, -47, 47 },
	{ 83, 0, 6 },
	{ 83, -94, 47 },
	{ 83, -36, 47 },
	{ 83, -46, 47 },
	{ 83, -34, 47 },
	{ 83, -33, 47 },
	{ 0, 0, 33 },
	{ 0, 0, 46 },
	{ 0, 26, 0 },
	{ 0, 0, 42 },
	{ 83, -40, 47 },
	{ 83, -26, 47 },
	{ 83, 0, 8 },
	{ 83, -41, 47 },
	{ 83, 0, 39 },
	{ 83, -33, 47 },
	{ 83, -34, 47 },
	{ 83, -31, 47 },
	{ 83, -28, 47 },
	{ 0, 0, 41 },
	{ 83, 0, 40 },
	{ 83, 0, 7 },
	{ 83, -35, 47 },
	{ 83, 0, 11 },
	{ 83, -35, 47 },
	{ 83, -33, 47 },
	{ 83, -17, 47 },
	{ 83, 0, 36 },
	{ 83, -31, 47 },
	{ 83, 0, 38 },
	{ 83, 0, 9 },
	{ 0, 71, 37 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 109 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section

int yywrap()  
{  
    return 1;  
}
