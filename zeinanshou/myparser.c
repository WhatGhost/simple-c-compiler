/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 116 of your 30 day trial period.
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
* myparser.c
* C source file generated from myparser.y.
* 
* Date: 01/04/18
* Time: 01:38:08
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\myparser.y"

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

#line 70 "myparser.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\myparser.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 65 ".\\myparser.y"

																yyval=newNode();
																yyval->index=count++;
																yyval->nodekind=Stmt;
																yyval->kind.stmt=FunctionK;
																yyval->child[0]=yyattribute(1 - 6);
																yyval->child[1]=yyattribute(5 - 6);
																root=yyval;
															
#line 204 "myparser.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 76 ".\\myparser.y"

						yyval=newNode();
						yyval->index=count++;
						yyval->nodekind=Stmt;
						yyval->kind.stmt=StmtsK;
						for(i=0;i<MAXCHILDREN;i++){
							if(yyattribute(1 - 1)->child[i]==NULL)
								break;
							else
							{
								yyval->child[i]=yyattribute(1 - 1)->child[i];
								yyattribute(1 - 1)->child[i]=NULL;
							}
						}
					
#line 231 "myparser.c"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 92 ".\\myparser.y"

								yyval=newNode();
								yyval->child[0]=yyattribute(1 - 2);
								for(i=0;i<MAXCHILDREN;i++){
									if(yyattribute(2 - 2)->child[i]==NULL)
										break;
									else
									{
										yyval->child[i+1]=yyattribute(2 - 2)->child[i];
										yyattribute(2 - 2)->child[i]=NULL;
									}
								}
							
#line 256 "myparser.c"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 105 ".\\myparser.y"
 
								yyval=newNode();
								yyval->child[0]=yyattribute(1 - 1);
							
#line 272 "myparser.c"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 112 ".\\myparser.y"
yyval=yyattribute(1 - 2);
#line 285 "myparser.c"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 113 ".\\myparser.y"
yyval=yyattribute(1 - 2);
#line 298 "myparser.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 114 ".\\myparser.y"
yyval=yyattribute(2 - 3);
#line 311 "myparser.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 115 ".\\myparser.y"
yyval=yyattribute(1 - 1);
#line 324 "myparser.c"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 116 ".\\myparser.y"
yyval=yyattribute(1 - 1);
#line 337 "myparser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 117 ".\\myparser.y"
yyval=yyattribute(1 - 1);
#line 350 "myparser.c"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 118 ".\\myparser.y"
yyval=yyattribute(1 - 1);
#line 363 "myparser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 119 ".\\myparser.y"

						yyval=yyattribute(1 - 2);
					
#line 378 "myparser.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 122 ".\\myparser.y"

						yyval=newNode();
						yyval->nodekind=Stmt;
						yyval->index=count++;
						yyval->kind.stmt=EmptyK;
					
#line 396 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 128 ".\\myparser.y"

								yyval=newNode();
								yyval->nodekind=Stmt;
								yyval->index=count++;
								yyval->kind.stmt=EmptyK;
							
#line 414 "myparser.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 134 ".\\myparser.y"
	yyval=yyattribute(1 - 2);	
#line 427 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 135 ".\\myparser.y"
	yyval=yyattribute(1 - 2);	
#line 440 "myparser.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 138 ".\\myparser.y"

											yyval=newNode();
											yyval->nodekind=Stmt;
											yyval->index=count++;
											yyval->kind.stmt=DeclareK;
											yyval->child[0]=yyattribute(1 - 2);
											yyval->child[1]=yyattribute(2 - 2);
											//
											if(yyval->child[1]->child[0]==NULL){
												yyval->child[1]->type=yyval->child[0]->type;
											}else{
												yyval->child[1]->child[0]->type=yyval->child[0]->type;
											}
										
#line 466 "myparser.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 153 ".\\myparser.y"

														yyval=newNode();
														yyval->index=count++;
														yyval->nodekind=Stmt;
														yyval->kind.stmt=DeclareK;
														yyval->child[0]=yyattribute(1 - 3);
														yyval->child[1]=yyattribute(2 - 3);
														if(yyval->child[1]->child[0]==NULL){
															yyval->child[1]->type=yyval->child[0]->type;
														}else{
															yyval->child[1]->child[0]->type=yyval->child[0]->type;
														}
														for(i=0;i<MAXCHILDREN;i++){
															if(yyattribute(3 - 3)->child[i]==NULL)
																break;
															else
															{
																	if(yyattribute(3 - 3)->child[i]->child[0]==NULL){
																		yyattribute(3 - 3)->child[i]->type=yyval->child[0]->type;
																	}else{
																		yyattribute(3 - 3)->child[i]->child[0]->type=yyval->child[0]->type;
																	}
																	yyval->child[i+2]=yyattribute(3 - 3)->child[i];
																	yyattribute(3 - 3)->child[i]=NULL;
															}
														}
													
#line 505 "myparser.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 183 ".\\myparser.y"

							yyval=newNode();
							yyval->nodekind=Expr;
							yyval->index=count++;
							yyval->kind.expr=TypeK;
							yyval->type=Int;
							Nowtype=Int;
						
#line 525 "myparser.c"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 191 ".\\myparser.y"

							yyval=newNode();
							yyval->nodekind=Expr;
							yyval->index=count++;
							yyval->kind.expr=TypeK;
							yyval->type=Char;
							Nowtype=Char;
						
#line 545 "myparser.c"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 201 ".\\myparser.y"

										yyval=newNode();
										yyval->nodekind=Expr;
										yyval->index=count++;
										yyval->kind.expr=AssignK;
										yyval->attr.op=(char *)malloc(strlen("=")+1); 
										strcpy(yyval->attr.op,"=");
										yyval->child[0]=yyattribute(1 - 3);
										yyval->child[1]=yyattribute(3 - 3);
										lookupid(yyattribute(1 - 3)->attr.name)->is_init=1;
										yyval->type=yyattribute(1 - 3)->type;
										lookupid(yyattribute(1 - 3)->attr.name)->value = yyattribute(3 - 3)->value;
										//printf("fuzhi:%d=%d",lookupid($1->attr.name)->value , $3->value);
									
#line 571 "myparser.c"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 215 ".\\myparser.y"
yyval=yyattribute(1 - 1);
#line 584 "myparser.c"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 217 ".\\myparser.y"

												yyval=newNode();
												yyval->child[0]=yyattribute(2 - 3);
												for(i=0;i<MAXCHILDREN;i++){
													if(yyattribute(3 - 3)->child[i]==NULL)
														break;
													else
													{
														yyval->child[i+1]=yyattribute(3 - 3)->child[i];
														yyattribute(3 - 3)->child[i]=NULL;
													}
												}
											
#line 609 "myparser.c"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 230 ".\\myparser.y"

									yyval=newNode();
									yyval->child[0]=yyattribute(2 - 2);
								
#line 625 "myparser.c"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 237 ".\\myparser.y"

				yyval=newNode();
				yyval->index=count++;
				yyval->nodekind=Stmt;
				yyval->kind.stmt=IfK;
				yyval->child[0]=yyattribute(3 - 5);
				if (yyattribute(5 - 5)!=NULL) yyval->child[1]=yyattribute(5 - 5);
				yyval->stmtno=stmtcount;
				stmtcount+=2;
			
#line 647 "myparser.c"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 248 ".\\myparser.y"

				yyval=newNode();
				yyval->index=count++;
				yyval->nodekind=Stmt;
				yyval->kind.stmt=IfElseK;
				yyval->child[0]=yyattribute(3 - 7);
				i=1;
				if (yyattribute(5 - 7)!=NULL) yyval->child[i++]=yyattribute(5 - 7);
				if (yyattribute(7 - 7)!=NULL) yyval->child[i++]=yyattribute(7 - 7);
				yyval->stmtno=stmtcount;
				stmtcount+=2;
			
#line 671 "myparser.c"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 262 ".\\myparser.y"

													yyval=newNode();
													yyval->nodekind=Stmt;
													yyval->index=count++;
													yyval->kind.stmt=WhileK;
													yyval->child[0]=yyattribute(3 - 5);
													if (yyattribute(5 - 5)!=NULL) yyval->child[1]=yyattribute(5 - 5);
													yyval->stmtno=stmtcount;
													stmtcount+=3;
												
#line 693 "myparser.c"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 274 ".\\myparser.y"

														yyval=newNode();
														yyval->nodekind=Stmt;
														yyval->index=count++;
														yyval->kind.stmt=DowhileK;
														yyval->child[1]=yyattribute(5 - 6);
														if (yyattribute(2 - 6)!=NULL) yyval->child[0]=yyattribute(2 - 6);
														
													
#line 714 "myparser.c"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[10];
			yyinitdebug(yya, 10);
#endif
			{
#line 285 ".\\myparser.y"

																							yyval=newNode();
																							yyval->nodekind=Stmt;
																							yyval->index=count++;
																							yyval->kind.stmt=ForK;
																							temp2=0;
																							if (yyattribute(3 - 9)!=NULL) yyval->child[temp2++]=yyattribute(3 - 9);
																							if (yyattribute(5 - 9)!=NULL) yyval->child[temp2++]=yyattribute(5 - 9);
																							if (yyattribute(7 - 9)!=NULL) yyval->child[temp2++]=yyattribute(7 - 9);
																							if (yyattribute(9 - 9)!=NULL) yyval->child[temp2++]=yyattribute(9 - 9);
																							yyval->stmtno=stmtcount;
																							stmtcount+=3;
																						
#line 739 "myparser.c"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 300 ".\\myparser.y"

							yyval=yyattribute(1 - 1);
							
						
#line 755 "myparser.c"
			}
		}
		break;
	case 30:
		{
#line 304 ".\\myparser.y"

							yyval=newNode();
							yyval->index=count++;
							yyval->nodekind=Stmt;
							yyval->kind.stmt=EmptyK;
						
#line 768 "myparser.c"
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 312 ".\\myparser.y"

								yyval=yyattribute(1 - 1);
							
#line 782 "myparser.c"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 315 ".\\myparser.y"

								yyval=yyattribute(1 - 1);
							
#line 797 "myparser.c"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 318 ".\\myparser.y"

								yyval=yyattribute(1 - 1);
							
#line 812 "myparser.c"
			}
		}
		break;
	case 34:
		{
#line 321 ".\\myparser.y"

								yyval=newNode();
								yyval->index=count++;
								yyval->nodekind=Stmt;
								yyval->kind.stmt=EmptyK;
							
#line 825 "myparser.c"
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 329 ".\\myparser.y"

											yyval=newNode();
											yyval->index=count++;
											yyval->nodekind=Stmt;
											yyval->kind.stmt=AssignKind;
											yyval->child[0]=yyattribute(1 - 3);
											yyval->child[1]=yyattribute(3 - 3);
											yyval->type=yyattribute(1 - 3)->type;
											if(lookupid(yyattribute(1 - 3)->attr.name)==NULL)
												error("变量未定义");
											else{
											//lookupid($1->attr.name)->value = $3->value;
											//printf("fuzhi:%d=%d",lookupid($1->attr.name)->value , $3->value);
											lookupid(yyattribute(1 - 3)->attr.name)->is_init = 1;
											}
											
										
#line 853 "myparser.c"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 348 ".\\myparser.y"

											yyval=newNode();
											yyval->index=count++;
											yyval->nodekind=Stmt;
											yyval->kind.stmt=InputK;
											yyval->child[0]=yyattribute(3 - 4);
										
#line 872 "myparser.c"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 356 ".\\myparser.y"

												yyval=newNode();
												yyval->index=count++;
												yyval->nodekind=Stmt;
												yyval->kind.stmt=OutputK;
												yyval->child[0]=yyattribute(3 - 4);
											
#line 891 "myparser.c"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 365 ".\\myparser.y"

						yyval=newNode();
						yyval->index=count++;
						yyval->nodekind=Expr;
						yyval->kind.expr=IdK;
						yyval->attr.name=(char *)malloc(strlen(yylval->attr.name)+1); 
						strcpy(yyval->attr.name,yylval->attr.name);
						yyval->type=lookuptype(yyval->attr.name);
						//insert(NotType,$$->attr.name);
						if(lookupid(yyval->attr.name)==NULL)
							error("变量未声明");
					
#line 915 "myparser.c"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 379 ".\\myparser.y"

						yyval=newNode();
						yyval->index=count++;
						yyval->nodekind=Expr;
						yyval->kind.expr=IdK;
						yyval->attr.name=(char *)malloc(strlen(yylval->attr.name)+1); 
						strcpy(yyval->attr.name,yylval->attr.name);
						insert(Nowtype,yyval->attr.name);
					
#line 936 "myparser.c"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 390 ".\\myparser.y"

								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("+")+1); 
								strcpy(yyval->attr.op,"+");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								yyval->type=Int;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value+yyattribute(3 - 3)->value;
							
#line 962 "myparser.c"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 404 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("-")+1); 
								strcpy(yyval->attr.op,"-");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->type=Int;
								yyval->valno=valcount;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value-yyattribute(3 - 3)->value;
							
#line 988 "myparser.c"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 418 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("*")+1); 
								strcpy(yyval->attr.op,"*");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->type=Int;
								yyval->valno=valcount;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value*yyattribute(3 - 3)->value;
							
#line 1014 "myparser.c"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 432 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("/")+1); 
								strcpy(yyval->attr.op,"/");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->type=Int;
								yyval->valno=valcount;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value/yyattribute(3 - 3)->value;
							
#line 1040 "myparser.c"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 446 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("==")+1); 
								strcpy(yyval->attr.op,"==");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->type=Int;
								yyval->child[1]=yyattribute(3 - 3);
								if(yyattribute(1 - 3)->value==yyattribute(3 - 3)->value)
									yyval->value=1;
								else
									yyval->value=0;
							
#line 1067 "myparser.c"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 461 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("!=")+1); 
								strcpy(yyval->attr.op,"!=");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->type=Int;
								yyval->child[1]=yyattribute(3 - 3);
								if(yyattribute(1 - 3)->value!=yyattribute(3 - 3)->value)
									yyval->value=1;
								else
									yyval->value=0;
							
#line 1094 "myparser.c"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 476 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("<=")+1); 
								strcpy(yyval->attr.op,"<=");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->type=Int;
								if(yyattribute(1 - 3)->value<=yyattribute(3 - 3)->value)
									yyval->value=1;
								else
									yyval->value=0;
							
#line 1121 "myparser.c"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 491 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen(">=")+1); 
								strcpy(yyval->attr.op,">=");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->type=Int;
								if(yyattribute(1 - 3)->value>=yyattribute(3 - 3)->value)
									yyval->value=1;
								else
									yyval->value=0;
							
#line 1148 "myparser.c"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 506 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("<")+1); 
								strcpy(yyval->attr.op,"<");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->type=Int;
								if(yyattribute(1 - 3)->value<yyattribute(3 - 3)->value)
									yyval->value=1;
								else
									yyval->value=0;
							
#line 1175 "myparser.c"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 521 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen(">")+1); 
								strcpy(yyval->attr.op,">");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->type=Int;
								yyval->child[1]=yyattribute(3 - 3);
								if(yyattribute(1 - 3)->value>yyattribute(3 - 3)->value)
									yyval->value=1;
								else
									yyval->value=0;
							
#line 1202 "myparser.c"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 536 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK2;
								yyval->attr.op=(char *)malloc(strlen("++")+1); 
								strcpy(yyval->attr.op,"++");
								yyval->child[0]=yyattribute(1 - 2);
								yyval->valno=valcount;
								yyval->type=Int;
								valcount++;
								yyval->value=yyattribute(2 - 2)->value+1;
							
#line 1227 "myparser.c"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 549 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK2;
								yyval->attr.op=(char *)malloc(strlen("--")+1); 
								strcpy(yyval->attr.op,"--");
								yyval->child[0]=yyattribute(1 - 2);
								yyval->valno=valcount;
								yyval->type=Int;
								valcount++;
								yyval->value=yyattribute(2 - 2)->value-1;
							
#line 1252 "myparser.c"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 562 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("%")+1); 
								strcpy(yyval->attr.op,"%");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								valcount++;
								yyval->type=Int;
								yyval->value=yyattribute(1 - 3)->value%yyattribute(3 - 3)->value;
							
#line 1278 "myparser.c"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 576 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("&")+1); 
								strcpy(yyval->attr.op,"&");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								yyval->type=Int;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value&yyattribute(3 - 3)->value;
							
#line 1304 "myparser.c"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 590 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("|")+1); 
								strcpy(yyval->attr.op,"|");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								valcount++;
								yyval->type=Int;
								yyval->value=yyattribute(1 - 3)->value|yyattribute(3 - 3)->value;
							
#line 1330 "myparser.c"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 604 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("^")+1); 
								strcpy(yyval->attr.op,"^");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								valcount++;
								yyval->type=Int;
								yyval->value=yyattribute(1 - 3)->value^yyattribute(3 - 3)->value;
							
#line 1356 "myparser.c"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 618 ".\\myparser.y"
	yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK2;
								yyval->attr.op=(char *)malloc(strlen("~")+1); 
								strcpy(yyval->attr.op,"~");
								yyval->child[0]=yyattribute(2 - 2);
								yyval->type=Int;
								yyval->value=~yyattribute(2 - 2)->value;
							
#line 1378 "myparser.c"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 628 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen("<<")+1); 
								strcpy(yyval->attr.op,"<<");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								yyval->type=Int;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value<<yyattribute(3 - 3)->value;
							
#line 1404 "myparser.c"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 642 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK;
								yyval->attr.op=(char *)malloc(strlen(">>")+1); 
								strcpy(yyval->attr.op,">>");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->valno=valcount;
								yyval->type=Int;
								valcount++;
								yyval->value=yyattribute(1 - 3)->value>>yyattribute(3 - 3)->value;
							
#line 1430 "myparser.c"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 656 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("&&")+1); 
								strcpy(yyval->attr.op,"&&");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->stmtno=stmtcount;
								yyval->type=Int;
								stmtcount++;
								yyval->value=yyattribute(1 - 3)->value&&yyattribute(3 - 3)->value;
							
#line 1456 "myparser.c"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 670 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("||")+1); 
								strcpy(yyval->attr.op,"||");
								yyval->child[0]=yyattribute(1 - 3);
								yyval->child[1]=yyattribute(3 - 3);
								yyval->stmtno=stmtcount;
								yyval->type=Int;
								stmtcount++;
								yyval->value=yyattribute(1 - 3)->value||yyattribute(3 - 3)->value;
							
#line 1482 "myparser.c"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 684 ".\\myparser.y"
	
								yyval=newNode();
								yyval->nodekind=Expr;
								yyval->index=count++;
								yyval->kind.expr=OpK3;
								yyval->attr.op=(char *)malloc(strlen("!")+1); 
								strcpy(yyval->attr.op,"!");
								yyval->child[0]=yyattribute(2 - 2);
								if(yyattribute(2 - 2)->value!=0)
									yyval->value=0;
								else
									yyval->value=1;
							
#line 1507 "myparser.c"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 697 ".\\myparser.y"

									yyval=yyattribute(2 - 3);
								
#line 1522 "myparser.c"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 700 ".\\myparser.y"
	
								yyval=newNode();
								yyval->index=count++;
								yyval->nodekind=Expr;
								yyval->kind.expr=ConstK;
								yyval->attr.val=yylval->attr.val;
								yyval->value = yylval->attr.val;
								yyval->type=Int;
							
#line 1543 "myparser.c"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 709 ".\\myparser.y"
	
								yyval=newNode();
								yyval->index=count++;
								yyval->nodekind=Expr;
								yyval->kind.expr=IdK2;
								yyval->attr.name=(char *)malloc(strlen(yylval->attr.name)+1); 
								yyval->type=lookuptype(yyval->attr.name);
								strcpy(yyval->attr.name,yylval->attr.name);
								//printf("%s    ,%d    ",yylval->attr.name,lookupid($$->attr.name)==NULL);
								yyval->value=lookupid(yyval->attr.name)->value;
								if(lookupid(yyval->attr.name)==NULL)
									error("变量未声明");
								else if(lookupid(yyval->attr.name)->is_init==0)
									error("变量未初始化");
							
#line 1570 "myparser.c"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 724 ".\\myparser.y"

								yyval=newNode();
								yyval->index=count++;
								yyval->nodekind=Expr;
								yyval->kind.expr=ConstK;
								yyval->attr.val=yylval->attr.val;
								yyval->value = yylval->attr.val;
								yyval->type=Char;
							
#line 1591 "myparser.c"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 733 ".\\myparser.y"

										yyval=newNode();
										yyval->index=count++;
										yyval->nodekind=Expr;
										yyval->kind.expr=OpK2;
										yyval->attr.op=(char *)malloc(strlen("minus")+1); 
										strcpy(yyval->attr.op,"minus");
										yyval->child[0]=yyattribute(2 - 2);
										yyval->valno=valcount;
										yyval->value = -yyattribute(2 - 2)->value;
										valcount++;
									
#line 1615 "myparser.c"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 747 ".\\myparser.y"

								yyval=newNode();
								yyval->index=count++;
								yyval->nodekind=Expr;
								yyval->kind.expr=MainK;
							
#line 1633 "myparser.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "error", 256 },
	{ "LB", 257 },
	{ "RB", 258 },
	{ "LP", 259 },
	{ "RP", 260 },
	{ "SEMI", 261 },
	{ "PLUS", 262 },
	{ "MINUS", 263 },
	{ "MUL", 264 },
	{ "DIV", 265 },
	{ "EQ", 266 },
	{ "NZ", 267 },
	{ "LE", 268 },
	{ "GE", 269 },
	{ "LT", 270 },
	{ "GT", 271 },
	{ "INC", 272 },
	{ "DEC", 273 },
	{ "MOD", 274 },
	{ "ASSIGN", 275 },
	{ "IAND", 276 },
	{ "IOR", 277 },
	{ "XOR", 278 },
	{ "NOT", 279 },
	{ "SHL", 280 },
	{ "SHR", 281 },
	{ "AND", 282 },
	{ "OR", 283 },
	{ "OPPSITE", 284 },
	{ "CHARACTER", 285 },
	{ "UMINUS", 286 },
	{ "INT", 287 },
	{ "CHAR", 288 },
	{ "NUMBER", 289 },
	{ "ID", 290 },
	{ "COMMA", 291 },
	{ "FOR", 292 },
	{ "WHILE", 293 },
	{ "DO", 294 },
	{ "IF", 295 },
	{ "ELSE", 296 },
	{ "MAIN", 297 },
	{ "INPUT", 298 },
	{ "OUTPUT", 299 },
	{ "IFX", 300 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: functionmain",
	"functionmain: MAINF LP RP LB stmt_list RB",
	"stmt_list: stmts",
	"stmts: stmt stmts",
	"stmts: stmt",
	"stmt: declare_stmt SEMI",
	"stmt: assign_stmt SEMI",
	"stmt: LB stmt_list RB",
	"stmt: if_stmt",
	"stmt: while_stmt",
	"stmt: for_stmt",
	"stmt: dowhile_stmt",
	"stmt: expr SEMI",
	"stmt: SEMI",
	"stmt: LB RB",
	"stmt: output_stmt SEMI",
	"stmt: input_stmt SEMI",
	"declare_stmt: type_expr declare",
	"declare_stmt: type_expr declare other_declare",
	"type_expr: INT",
	"type_expr: CHAR",
	"declare: id_expr2 ASSIGN expr",
	"declare: id_expr2",
	"other_declare: COMMA declare other_declare",
	"other_declare: COMMA declare",
	"if_stmt: IF LP expr RP stmt",
	"if_stmt: IF LP expr RP stmt ELSE stmt",
	"while_stmt: WHILE LP expr RP stmt",
	"dowhile_stmt: DO stmt WHILE LP expr RP",
	"for_stmt: FOR LP infor_stmt SEMI for_expr SEMI infor_stmt RP stmt",
	"for_expr: expr",
	"for_expr:",
	"infor_stmt: assign_stmt",
	"infor_stmt: declare_stmt",
	"infor_stmt: expr",
	"infor_stmt:",
	"assign_stmt: id_expr1 ASSIGN expr",
	"input_stmt: INPUT LP id_expr1 RP",
	"output_stmt: OUTPUT LP expr RP",
	"id_expr1: ID",
	"id_expr2: ID",
	"expr: expr PLUS expr",
	"expr: expr MINUS expr",
	"expr: expr MUL expr",
	"expr: expr DIV expr",
	"expr: expr EQ expr",
	"expr: expr NZ expr",
	"expr: expr LE expr",
	"expr: expr GE expr",
	"expr: expr LT expr",
	"expr: expr GT expr",
	"expr: expr INC",
	"expr: expr DEC",
	"expr: expr MOD expr",
	"expr: expr IAND expr",
	"expr: expr IOR expr",
	"expr: expr XOR expr",
	"expr: NOT expr",
	"expr: expr SHL expr",
	"expr: expr SHR expr",
	"expr: expr AND expr",
	"expr: expr OR expr",
	"expr: OPPSITE expr",
	"expr: LP expr RP",
	"expr: NUMBER",
	"expr: ID",
	"expr: CHARACTER",
	"expr: MINUS expr",
	"MAINF: MAIN"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 6, 0 },
	{ 2, 1, 1 },
	{ 3, 2, 2 },
	{ 3, 1, 3 },
	{ 4, 2, 4 },
	{ 4, 2, 5 },
	{ 4, 3, 6 },
	{ 4, 1, 7 },
	{ 4, 1, 8 },
	{ 4, 1, 9 },
	{ 4, 1, 10 },
	{ 4, 2, 11 },
	{ 4, 1, 12 },
	{ 4, 2, 13 },
	{ 4, 2, 14 },
	{ 4, 2, 15 },
	{ 5, 2, 16 },
	{ 5, 3, 17 },
	{ 6, 1, 18 },
	{ 6, 1, 19 },
	{ 7, 3, 20 },
	{ 7, 1, 21 },
	{ 8, 3, 22 },
	{ 8, 2, 23 },
	{ 9, 5, 24 },
	{ 9, 7, 25 },
	{ 10, 5, 26 },
	{ 11, 6, 27 },
	{ 12, 9, 28 },
	{ 13, 1, 29 },
	{ 13, 0, 30 },
	{ 14, 1, 31 },
	{ 14, 1, 32 },
	{ 14, 1, 33 },
	{ 14, 0, 34 },
	{ 15, 3, 35 },
	{ 16, 4, 36 },
	{ 17, 4, 37 },
	{ 18, 1, 38 },
	{ 19, 1, 39 },
	{ 20, 3, 40 },
	{ 20, 3, 41 },
	{ 20, 3, 42 },
	{ 20, 3, 43 },
	{ 20, 3, 44 },
	{ 20, 3, 45 },
	{ 20, 3, 46 },
	{ 20, 3, 47 },
	{ 20, 3, 48 },
	{ 20, 3, 49 },
	{ 20, 2, 50 },
	{ 20, 2, 51 },
	{ 20, 3, 52 },
	{ 20, 3, 53 },
	{ 20, 3, 54 },
	{ 20, 3, 55 },
	{ 20, 2, 56 },
	{ 20, 3, 57 },
	{ 20, 3, 58 },
	{ 20, 3, 59 },
	{ 20, 3, 60 },
	{ 20, 2, 61 },
	{ 20, 3, 62 },
	{ 20, 1, 63 },
	{ 20, 1, 64 },
	{ 20, 1, 65 },
	{ 20, 2, 66 },
	{ 21, 1, 67 }
};

int YYNEAR YYDCDECL yytokenaction_size = 402;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 127, YYAT_SHIFT, 131 },
	{ 133, YYAT_SHIFT, 135 },
	{ 127, YYAT_SHIFT, 62 },
	{ 127, YYAT_SHIFT, 63 },
	{ 127, YYAT_SHIFT, 64 },
	{ 127, YYAT_SHIFT, 65 },
	{ 127, YYAT_SHIFT, 66 },
	{ 127, YYAT_SHIFT, 67 },
	{ 127, YYAT_SHIFT, 68 },
	{ 127, YYAT_SHIFT, 69 },
	{ 127, YYAT_SHIFT, 70 },
	{ 127, YYAT_SHIFT, 71 },
	{ 127, YYAT_SHIFT, 72 },
	{ 127, YYAT_SHIFT, 73 },
	{ 127, YYAT_SHIFT, 74 },
	{ 128, YYAT_SHIFT, 132 },
	{ 127, YYAT_SHIFT, 75 },
	{ 127, YYAT_SHIFT, 76 },
	{ 127, YYAT_SHIFT, 77 },
	{ 124, YYAT_SHIFT, 130 },
	{ 127, YYAT_SHIFT, 78 },
	{ 127, YYAT_SHIFT, 79 },
	{ 127, YYAT_SHIFT, 80 },
	{ 127, YYAT_SHIFT, 81 },
	{ 125, YYAT_SHIFT, 62 },
	{ 125, YYAT_SHIFT, 63 },
	{ 125, YYAT_SHIFT, 64 },
	{ 125, YYAT_SHIFT, 65 },
	{ 125, YYAT_SHIFT, 66 },
	{ 125, YYAT_SHIFT, 67 },
	{ 125, YYAT_SHIFT, 68 },
	{ 125, YYAT_SHIFT, 69 },
	{ 125, YYAT_SHIFT, 70 },
	{ 125, YYAT_SHIFT, 71 },
	{ 125, YYAT_SHIFT, 72 },
	{ 125, YYAT_SHIFT, 73 },
	{ 125, YYAT_SHIFT, 74 },
	{ 122, YYAT_SHIFT, 94 },
	{ 125, YYAT_SHIFT, 75 },
	{ 125, YYAT_SHIFT, 76 },
	{ 125, YYAT_SHIFT, 77 },
	{ 94, YYAT_SHIFT, 51 },
	{ 125, YYAT_SHIFT, 78 },
	{ 125, YYAT_SHIFT, 79 },
	{ 125, YYAT_SHIFT, 80 },
	{ 125, YYAT_SHIFT, 81 },
	{ 123, YYAT_SHIFT, 62 },
	{ 123, YYAT_SHIFT, 63 },
	{ 123, YYAT_SHIFT, 64 },
	{ 123, YYAT_SHIFT, 65 },
	{ 123, YYAT_SHIFT, 66 },
	{ 123, YYAT_SHIFT, 67 },
	{ 123, YYAT_SHIFT, 68 },
	{ 123, YYAT_SHIFT, 69 },
	{ 123, YYAT_SHIFT, 70 },
	{ 123, YYAT_SHIFT, 71 },
	{ 123, YYAT_SHIFT, 72 },
	{ 123, YYAT_SHIFT, 73 },
	{ 123, YYAT_SHIFT, 74 },
	{ 93, YYAT_SHIFT, 121 },
	{ 123, YYAT_SHIFT, 75 },
	{ 123, YYAT_SHIFT, 76 },
	{ 123, YYAT_SHIFT, 77 },
	{ 92, YYAT_SHIFT, 120 },
	{ 123, YYAT_SHIFT, 78 },
	{ 123, YYAT_SHIFT, 79 },
	{ 123, YYAT_SHIFT, 80 },
	{ 123, YYAT_SHIFT, 81 },
	{ 97, YYAT_SHIFT, 62 },
	{ 97, YYAT_SHIFT, 63 },
	{ 97, YYAT_SHIFT, 64 },
	{ 97, YYAT_SHIFT, 65 },
	{ 97, YYAT_SHIFT, 66 },
	{ 97, YYAT_SHIFT, 67 },
	{ 97, YYAT_SHIFT, 68 },
	{ 97, YYAT_SHIFT, 69 },
	{ 97, YYAT_SHIFT, 70 },
	{ 97, YYAT_SHIFT, 71 },
	{ 97, YYAT_SHIFT, 72 },
	{ 97, YYAT_SHIFT, 73 },
	{ 97, YYAT_SHIFT, 74 },
	{ 90, YYAT_SHIFT, 119 },
	{ 97, YYAT_SHIFT, 75 },
	{ 97, YYAT_SHIFT, 76 },
	{ 97, YYAT_SHIFT, 77 },
	{ 89, YYAT_SHIFT, 118 },
	{ 97, YYAT_SHIFT, 78 },
	{ 97, YYAT_SHIFT, 79 },
	{ 97, YYAT_SHIFT, 80 },
	{ 97, YYAT_SHIFT, 81 },
	{ 87, YYAT_SHIFT, 62 },
	{ 87, YYAT_SHIFT, 63 },
	{ 87, YYAT_SHIFT, 64 },
	{ 87, YYAT_SHIFT, 65 },
	{ 87, YYAT_SHIFT, 66 },
	{ 87, YYAT_SHIFT, 67 },
	{ 87, YYAT_SHIFT, 68 },
	{ 87, YYAT_SHIFT, 69 },
	{ 87, YYAT_SHIFT, 70 },
	{ 87, YYAT_SHIFT, 71 },
	{ 87, YYAT_SHIFT, 72 },
	{ 87, YYAT_SHIFT, 73 },
	{ 87, YYAT_SHIFT, 74 },
	{ 88, YYAT_SHIFT, 117 },
	{ 87, YYAT_SHIFT, 75 },
	{ 87, YYAT_SHIFT, 76 },
	{ 87, YYAT_SHIFT, 77 },
	{ 84, YYAT_SHIFT, 116 },
	{ 87, YYAT_SHIFT, 78 },
	{ 87, YYAT_SHIFT, 79 },
	{ 87, YYAT_SHIFT, 80 },
	{ 87, YYAT_SHIFT, 81 },
	{ 115, YYAT_SHIFT, 62 },
	{ 115, YYAT_SHIFT, 63 },
	{ 115, YYAT_SHIFT, 64 },
	{ 115, YYAT_SHIFT, 65 },
	{ 115, YYAT_SHIFT, 66 },
	{ 115, YYAT_SHIFT, 67 },
	{ 115, YYAT_SHIFT, 68 },
	{ 115, YYAT_SHIFT, 69 },
	{ 115, YYAT_SHIFT, 70 },
	{ 115, YYAT_SHIFT, 71 },
	{ 115, YYAT_SHIFT, 72 },
	{ 115, YYAT_SHIFT, 73 },
	{ 115, YYAT_SHIFT, 74 },
	{ 53, YYAT_SHIFT, 96 },
	{ 115, YYAT_SHIFT, 75 },
	{ 115, YYAT_SHIFT, 76 },
	{ 115, YYAT_SHIFT, 77 },
	{ 52, YYAT_SHIFT, 94 },
	{ 115, YYAT_SHIFT, 78 },
	{ 115, YYAT_SHIFT, 79 },
	{ 115, YYAT_SHIFT, 80 },
	{ 30, YYAT_SHIFT, 7 },
	{ 49, YYAT_SHIFT, 91 },
	{ 30, YYAT_SHIFT, 8 },
	{ 47, YYAT_SHIFT, 89 },
	{ 30, YYAT_SHIFT, 9 },
	{ 41, YYAT_SHIFT, 83 },
	{ 30, YYAT_SHIFT, 10 },
	{ 110, YYAT_SHIFT, 62 },
	{ 110, YYAT_SHIFT, 63 },
	{ 110, YYAT_SHIFT, 64 },
	{ 110, YYAT_SHIFT, 65 },
	{ 110, YYAT_SHIFT, 66 },
	{ 110, YYAT_SHIFT, 67 },
	{ 110, YYAT_SHIFT, 68 },
	{ 110, YYAT_SHIFT, 69 },
	{ 110, YYAT_SHIFT, 70 },
	{ 110, YYAT_SHIFT, 71 },
	{ 110, YYAT_SHIFT, 72 },
	{ 110, YYAT_SHIFT, 73 },
	{ 110, YYAT_SHIFT, 74 },
	{ 39, YYAT_SHIFT, 82 },
	{ 110, YYAT_SHIFT, 75 },
	{ 30, YYAT_SHIFT, 11 },
	{ 110, YYAT_SHIFT, 77 },
	{ 35, YYAT_SHIFT, 60 },
	{ 110, YYAT_SHIFT, 78 },
	{ 110, YYAT_SHIFT, 79 },
	{ 30, YYAT_SHIFT, 12 },
	{ 30, YYAT_SHIFT, 13 },
	{ 32, YYAT_SHIFT, 59 },
	{ 30, YYAT_SHIFT, 14 },
	{ 30, YYAT_SHIFT, 15 },
	{ 30, YYAT_SHIFT, 16 },
	{ 30, YYAT_SHIFT, 17 },
	{ 31, YYAT_SHIFT, 58 },
	{ 30, YYAT_SHIFT, 18 },
	{ 30, YYAT_SHIFT, 19 },
	{ 30, YYAT_SHIFT, 20 },
	{ 30, YYAT_SHIFT, 21 },
	{ 108, YYAT_SHIFT, 72 },
	{ 108, YYAT_SHIFT, 73 },
	{ 30, YYAT_SHIFT, 22 },
	{ 30, YYAT_SHIFT, 23 },
	{ 114, YYAT_SHIFT, 62 },
	{ 114, YYAT_SHIFT, 63 },
	{ 114, YYAT_SHIFT, 64 },
	{ 114, YYAT_SHIFT, 65 },
	{ 114, YYAT_SHIFT, 66 },
	{ 114, YYAT_SHIFT, 67 },
	{ 114, YYAT_SHIFT, 68 },
	{ 114, YYAT_SHIFT, 69 },
	{ 114, YYAT_SHIFT, 70 },
	{ 114, YYAT_SHIFT, 71 },
	{ 114, YYAT_SHIFT, 72 },
	{ 114, YYAT_SHIFT, 73 },
	{ 114, YYAT_SHIFT, 74 },
	{ 28, YYAT_SHIFT, 56 },
	{ 114, YYAT_SHIFT, 75 },
	{ 114, YYAT_SHIFT, 76 },
	{ 114, YYAT_SHIFT, 77 },
	{ 26, YYAT_SHIFT, 55 },
	{ 114, YYAT_SHIFT, 78 },
	{ 114, YYAT_SHIFT, 79 },
	{ 111, YYAT_SHIFT, 62 },
	{ 111, YYAT_SHIFT, 63 },
	{ 111, YYAT_SHIFT, 64 },
	{ 111, YYAT_SHIFT, 65 },
	{ 111, YYAT_SHIFT, 66 },
	{ 111, YYAT_SHIFT, 67 },
	{ 111, YYAT_SHIFT, 68 },
	{ 111, YYAT_SHIFT, 69 },
	{ 111, YYAT_SHIFT, 70 },
	{ 111, YYAT_SHIFT, 71 },
	{ 111, YYAT_SHIFT, 72 },
	{ 111, YYAT_SHIFT, 73 },
	{ 111, YYAT_SHIFT, 74 },
	{ 25, YYAT_SHIFT, 54 },
	{ 111, YYAT_SHIFT, 75 },
	{ 101, YYAT_SHIFT, 72 },
	{ 101, YYAT_SHIFT, 73 },
	{ 23, YYAT_SHIFT, 50 },
	{ 111, YYAT_SHIFT, 78 },
	{ 111, YYAT_SHIFT, 79 },
	{ 109, YYAT_SHIFT, 62 },
	{ 109, YYAT_SHIFT, 63 },
	{ 109, YYAT_SHIFT, 64 },
	{ 109, YYAT_SHIFT, 65 },
	{ 109, YYAT_SHIFT, 66 },
	{ 109, YYAT_SHIFT, 67 },
	{ 109, YYAT_SHIFT, 68 },
	{ 109, YYAT_SHIFT, 69 },
	{ 109, YYAT_SHIFT, 70 },
	{ 109, YYAT_SHIFT, 71 },
	{ 109, YYAT_SHIFT, 72 },
	{ 109, YYAT_SHIFT, 73 },
	{ 109, YYAT_SHIFT, 74 },
	{ 22, YYAT_SHIFT, 49 },
	{ 103, YYAT_SHIFT, 62 },
	{ 103, YYAT_SHIFT, 63 },
	{ 103, YYAT_SHIFT, 64 },
	{ 103, YYAT_SHIFT, 65 },
	{ 109, YYAT_SHIFT, 78 },
	{ 109, YYAT_SHIFT, 79 },
	{ 103, YYAT_SHIFT, 68 },
	{ 103, YYAT_SHIFT, 69 },
	{ 103, YYAT_SHIFT, 70 },
	{ 103, YYAT_SHIFT, 71 },
	{ 103, YYAT_SHIFT, 72 },
	{ 103, YYAT_SHIFT, 73 },
	{ 103, YYAT_SHIFT, 74 },
	{ 21, YYAT_SHIFT, 48 },
	{ 102, YYAT_SHIFT, 62 },
	{ 102, YYAT_SHIFT, 63 },
	{ 102, YYAT_SHIFT, 64 },
	{ 102, YYAT_SHIFT, 65 },
	{ 103, YYAT_SHIFT, 78 },
	{ 103, YYAT_SHIFT, 79 },
	{ 102, YYAT_SHIFT, 68 },
	{ 102, YYAT_SHIFT, 69 },
	{ 102, YYAT_SHIFT, 70 },
	{ 102, YYAT_SHIFT, 71 },
	{ 102, YYAT_SHIFT, 72 },
	{ 102, YYAT_SHIFT, 73 },
	{ 102, YYAT_SHIFT, 74 },
	{ 135, YYAT_SHIFT, 7 },
	{ 100, YYAT_SHIFT, 72 },
	{ 100, YYAT_SHIFT, 73 },
	{ 19, YYAT_SHIFT, 46 },
	{ 135, YYAT_SHIFT, 9 },
	{ 102, YYAT_SHIFT, 78 },
	{ 102, YYAT_SHIFT, 79 },
	{ 44, YYAT_SHIFT, 72 },
	{ 44, YYAT_SHIFT, 73 },
	{ 18, YYAT_SHIFT, 45 },
	{ 107, YYAT_SHIFT, 62 },
	{ 107, YYAT_SHIFT, 63 },
	{ 107, YYAT_SHIFT, 64 },
	{ 107, YYAT_SHIFT, 65 },
	{ 113, YYAT_SHIFT, 62 },
	{ 113, YYAT_SHIFT, 63 },
	{ 113, YYAT_SHIFT, 64 },
	{ 113, YYAT_SHIFT, 65 },
	{ 17, YYAT_REDUCE, 39 },
	{ 130, YYAT_SHIFT, 8 },
	{ 107, YYAT_SHIFT, 72 },
	{ 107, YYAT_SHIFT, 73 },
	{ 107, YYAT_SHIFT, 74 },
	{ 130, YYAT_SHIFT, 10 },
	{ 113, YYAT_SHIFT, 72 },
	{ 113, YYAT_SHIFT, 73 },
	{ 113, YYAT_SHIFT, 74 },
	{ 7, YYAT_SHIFT, 38 },
	{ 107, YYAT_SHIFT, 78 },
	{ 107, YYAT_SHIFT, 79 },
	{ 135, YYAT_SHIFT, 14 },
	{ 135, YYAT_SHIFT, 15 },
	{ 5, YYAT_SHIFT, 6 },
	{ 135, YYAT_SHIFT, 17 },
	{ 4, YYAT_SHIFT, 5 },
	{ 135, YYAT_SHIFT, 18 },
	{ 135, YYAT_SHIFT, 19 },
	{ 135, YYAT_SHIFT, 20 },
	{ 135, YYAT_SHIFT, 21 },
	{ 130, YYAT_SHIFT, 11 },
	{ 3, YYAT_SHIFT, 4 },
	{ 135, YYAT_SHIFT, 22 },
	{ 135, YYAT_SHIFT, 23 },
	{ 2, YYAT_ACCEPT, 0 },
	{ 130, YYAT_SHIFT, 12 },
	{ 130, YYAT_SHIFT, 13 },
	{ 0, YYAT_SHIFT, 1 },
	{ 130, YYAT_SHIFT, 14 },
	{ 130, YYAT_SHIFT, 15 },
	{ 130, YYAT_SHIFT, 16 },
	{ 130, YYAT_SHIFT, 17 },
	{ 45, YYAT_SHIFT, 8 },
	{ 99, YYAT_SHIFT, 64 },
	{ 99, YYAT_SHIFT, 65 },
	{ -1, YYAT_ERROR, 0 },
	{ 45, YYAT_SHIFT, 10 },
	{ 106, YYAT_SHIFT, 62 },
	{ 106, YYAT_SHIFT, 63 },
	{ 106, YYAT_SHIFT, 64 },
	{ 106, YYAT_SHIFT, 65 },
	{ 99, YYAT_SHIFT, 72 },
	{ 99, YYAT_SHIFT, 73 },
	{ 99, YYAT_SHIFT, 74 },
	{ 43, YYAT_SHIFT, 72 },
	{ 43, YYAT_SHIFT, 73 },
	{ -1, YYAT_ERROR, 0 },
	{ 106, YYAT_SHIFT, 72 },
	{ 106, YYAT_SHIFT, 73 },
	{ 106, YYAT_SHIFT, 74 },
	{ 42, YYAT_SHIFT, 72 },
	{ 42, YYAT_SHIFT, 73 },
	{ 45, YYAT_SHIFT, 11 },
	{ 37, YYAT_ERROR, 0 },
	{ 37, YYAT_SHIFT, 61 },
	{ 106, YYAT_SHIFT, 78 },
	{ 106, YYAT_SHIFT, 79 },
	{ 45, YYAT_SHIFT, 12 },
	{ 45, YYAT_SHIFT, 13 },
	{ -1, YYAT_ERROR, 0 },
	{ 45, YYAT_SHIFT, 14 },
	{ 45, YYAT_SHIFT, 15 },
	{ 45, YYAT_SHIFT, 16 },
	{ 45, YYAT_SHIFT, 17 },
	{ 105, YYAT_SHIFT, 62 },
	{ 105, YYAT_SHIFT, 63 },
	{ 105, YYAT_SHIFT, 64 },
	{ 105, YYAT_SHIFT, 65 },
	{ 104, YYAT_SHIFT, 62 },
	{ 104, YYAT_SHIFT, 63 },
	{ 104, YYAT_SHIFT, 64 },
	{ 104, YYAT_SHIFT, 65 },
	{ -1, YYAT_ERROR, 0 },
	{ 118, YYAT_SHIFT, 8 },
	{ 105, YYAT_SHIFT, 72 },
	{ 105, YYAT_SHIFT, 73 },
	{ 105, YYAT_SHIFT, 74 },
	{ 118, YYAT_SHIFT, 10 },
	{ 104, YYAT_SHIFT, 72 },
	{ 104, YYAT_SHIFT, 73 },
	{ 104, YYAT_SHIFT, 74 },
	{ 116, YYAT_SHIFT, 8 },
	{ 105, YYAT_SHIFT, 78 },
	{ 105, YYAT_SHIFT, 79 },
	{ -1, YYAT_ERROR, 0 },
	{ 116, YYAT_SHIFT, 10 },
	{ 104, YYAT_SHIFT, 78 },
	{ 104, YYAT_SHIFT, 79 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 118, YYAT_SHIFT, 11 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 118, YYAT_SHIFT, 12 },
	{ 118, YYAT_SHIFT, 13 },
	{ -1, YYAT_ERROR, 0 },
	{ 116, YYAT_SHIFT, 11 },
	{ -1, YYAT_ERROR, 0 },
	{ 118, YYAT_SHIFT, 16 },
	{ 118, YYAT_SHIFT, 40 },
	{ -1, YYAT_ERROR, 0 },
	{ 116, YYAT_SHIFT, 12 },
	{ 116, YYAT_SHIFT, 13 },
	{ -1, YYAT_ERROR, 0 },
	{ 98, YYAT_SHIFT, 64 },
	{ 98, YYAT_SHIFT, 65 },
	{ 116, YYAT_SHIFT, 16 },
	{ 116, YYAT_SHIFT, 40 },
	{ 112, YYAT_SHIFT, 62 },
	{ 112, YYAT_SHIFT, 63 },
	{ 112, YYAT_SHIFT, 64 },
	{ 112, YYAT_SHIFT, 65 },
	{ 98, YYAT_SHIFT, 72 },
	{ 98, YYAT_SHIFT, 73 },
	{ 98, YYAT_SHIFT, 74 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 112, YYAT_SHIFT, 72 },
	{ 112, YYAT_SHIFT, 73 },
	{ 112, YYAT_SHIFT, 74 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 6, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 68 },
	{ 300, 1, YYAT_ERROR, 0 },
	{ 38, 1, YYAT_ERROR, 0 },
	{ 31, 1, YYAT_ERROR, 0 },
	{ 32, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 135 },
	{ 26, 1, YYAT_DEFAULT, 135 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 66 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ 0, 0, YYAT_REDUCE, 64 },
	{ 0, 1, YYAT_REDUCE, 65 },
	{ 7, 1, YYAT_ERROR, 0 },
	{ 1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 135 },
	{ -16, 1, YYAT_ERROR, 0 },
	{ -30, 1, YYAT_ERROR, 0 },
	{ -46, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 94 },
	{ -66, 1, YYAT_ERROR, 0 },
	{ -65, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ -72, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ -124, 1, YYAT_REDUCE, 4 },
	{ -94, 1, YYAT_ERROR, 0 },
	{ -99, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ -104, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 69, 1, YYAT_DEFAULT, 127 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ -105, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 65 },
	{ -122, 1, YYAT_DEFAULT, 127 },
	{ 54, 1, YYAT_REDUCE, 67 },
	{ 48, 1, YYAT_REDUCE, 57 },
	{ -8, 1, YYAT_REDUCE, 62 },
	{ 49, 1, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ -157, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ -156, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ -162, 1, YYAT_REDUCE, 17 },
	{ -150, 1, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ 0, 0, YYAT_REDUCE, 52 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 63 },
	{ -154, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ -172, 1, YYAT_REDUCE, 34 },
	{ -157, 1, YYAT_DEFAULT, 127 },
	{ -174, 1, YYAT_ERROR, 0 },
	{ -179, 1, YYAT_DEFAULT, 127 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ -197, 1, YYAT_ERROR, 0 },
	{ -201, 1, YYAT_DEFAULT, 127 },
	{ -249, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ 0, 0, YYAT_DEFAULT, 118 },
	{ -194, 1, YYAT_REDUCE, 36 },
	{ 121, 1, YYAT_REDUCE, 41 },
	{ 45, 1, YYAT_REDUCE, 42 },
	{ -14, 1, YYAT_REDUCE, 43 },
	{ -61, 1, YYAT_REDUCE, 44 },
	{ -18, 1, YYAT_REDUCE, 45 },
	{ -32, 1, YYAT_REDUCE, 46 },
	{ 82, 1, YYAT_REDUCE, 47 },
	{ 78, 1, YYAT_REDUCE, 48 },
	{ 51, 1, YYAT_REDUCE, 49 },
	{ 5, 1, YYAT_REDUCE, 50 },
	{ -100, 1, YYAT_REDUCE, 53 },
	{ -46, 1, YYAT_REDUCE, 54 },
	{ -122, 1, YYAT_REDUCE, 55 },
	{ -66, 1, YYAT_REDUCE, 56 },
	{ 127, 1, YYAT_REDUCE, 58 },
	{ 9, 1, YYAT_REDUCE, 59 },
	{ -86, 1, YYAT_REDUCE, 60 },
	{ -150, 1, YYAT_REDUCE, 61 },
	{ 98, 1, YYAT_REDUCE, 31 },
	{ 0, 0, YYAT_DEFAULT, 135 },
	{ 90, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 135 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ -254, 1, YYAT_REDUCE, 24 },
	{ -216, 1, YYAT_REDUCE, 21 },
	{ -242, 1, YYAT_ERROR, 0 },
	{ -238, 1, YYAT_REDUCE, 30 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ -260, 1, YYAT_ERROR, 0 },
	{ -281, 1, YYAT_REDUCE, 25 },
	{ 0, 0, YYAT_REDUCE, 23 },
	{ 17, 1, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_DEFAULT, 135 },
	{ -259, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ 0, 1, YYAT_DEFAULT, 118 },
	{ 0, 0, YYAT_REDUCE, 29 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 65;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 135, 136 },
	{ 135, 32 },
	{ 0, 2 },
	{ 30, 57 },
	{ 30, 30 },
	{ 135, 33 },
	{ 135, 34 },
	{ 135, 29 },
	{ 135, 36 },
	{ 94, 122 },
	{ 135, -1 },
	{ 135, 31 },
	{ 135, 28 },
	{ 135, 35 },
	{ 130, 86 },
	{ 130, 24 },
	{ 135, 37 },
	{ 132, 134 },
	{ 116, 124 },
	{ 7, 39 },
	{ 7, 27 },
	{ 94, 53 },
	{ 0, 3 },
	{ 130, 133 },
	{ 130, 85 },
	{ 116, 125 },
	{ 122, 129 },
	{ 130, 25 },
	{ 119, 128 },
	{ 130, 87 },
	{ 118, 127 },
	{ 117, 126 },
	{ 96, 123 },
	{ 81, 115 },
	{ 80, 114 },
	{ 79, 113 },
	{ 78, 112 },
	{ 77, 111 },
	{ 76, 110 },
	{ 75, 109 },
	{ 74, 108 },
	{ 71, 107 },
	{ 70, 106 },
	{ 69, 105 },
	{ 68, 104 },
	{ 67, 103 },
	{ 66, 102 },
	{ 65, 101 },
	{ 64, 100 },
	{ 63, 99 },
	{ 62, 98 },
	{ 54, 97 },
	{ 52, 95 },
	{ 50, 93 },
	{ 49, 92 },
	{ 48, 90 },
	{ 46, 88 },
	{ 45, 84 },
	{ 24, 52 },
	{ 20, 47 },
	{ 12, 44 },
	{ 11, 43 },
	{ 10, 42 },
	{ 8, 41 },
	{ 6, 26 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 1, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 62, 7 },
	{ 17, 30 },
	{ 43, -1 },
	{ 0, -1 },
	{ 42, -1 },
	{ 41, -1 },
	{ 40, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 55, 135 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 51, 94 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, 135 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 43, 130 },
	{ 36, -1 },
	{ 0, -1 },
	{ 35, -1 },
	{ 36, -1 },
	{ 33, -1 },
	{ 0, -1 },
	{ 44, -1 },
	{ 0, -1 },
	{ 31, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 30, -1 },
	{ 29, -1 },
	{ 28, -1 },
	{ 27, -1 },
	{ 26, -1 },
	{ 25, -1 },
	{ 24, -1 },
	{ 23, -1 },
	{ 22, -1 },
	{ 21, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 20, -1 },
	{ 19, -1 },
	{ 18, -1 },
	{ 17, -1 },
	{ 16, -1 },
	{ 15, -1 },
	{ 14, -1 },
	{ 13, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 2, -1 },
	{ 0, -1 },
	{ 12, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 5, -1 },
	{ 27, 135 },
	{ 10, -1 },
	{ 24, 135 },
	{ 0, -1 },
	{ 0, -1 },
	{ 18, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 9, -1 },
	{ 0, -1 },
	{ 13, 135 },
	{ 0, -1 },
	{ 0, -1 },
	{ -4, 130 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 755 ".\\myparser.y"


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

