#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 116 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 01/04/18
# Time: 01:38:08
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : functionmain $end

    1  functionmain : MAINF LP RP LB stmt_list RB

    2  stmt_list : stmts

    3  stmts : stmt stmts
    4        | stmt

    5  stmt : declare_stmt SEMI
    6       | assign_stmt SEMI
    7       | LB stmt_list RB
    8       | if_stmt
    9       | while_stmt
   10       | for_stmt
   11       | dowhile_stmt
   12       | expr SEMI
   13       | SEMI
   14       | LB RB
   15       | output_stmt SEMI
   16       | input_stmt SEMI

   17  declare_stmt : type_expr declare
   18               | type_expr declare other_declare

   19  type_expr : INT
   20            | CHAR

   21  declare : id_expr2 ASSIGN expr
   22          | id_expr2

   23  other_declare : COMMA declare other_declare
   24                | COMMA declare

   25  if_stmt : IF LP expr RP stmt
   26          | IF LP expr RP stmt ELSE stmt

   27  while_stmt : WHILE LP expr RP stmt

   28  dowhile_stmt : DO stmt WHILE LP expr RP

   29  for_stmt : FOR LP infor_stmt SEMI for_expr SEMI infor_stmt RP stmt

   30  for_expr : expr
   31           |

   32  infor_stmt : assign_stmt
   33             | declare_stmt
   34             | expr
   35             |

   36  assign_stmt : id_expr1 ASSIGN expr

   37  input_stmt : INPUT LP id_expr1 RP

   38  output_stmt : OUTPUT LP expr RP

   39  id_expr1 : ID

   40  id_expr2 : ID

   41  expr : expr PLUS expr
   42       | expr MINUS expr
   43       | expr MUL expr
   44       | expr DIV expr
   45       | expr EQ expr
   46       | expr NZ expr
   47       | expr LE expr
   48       | expr GE expr
   49       | expr LT expr
   50       | expr GT expr
   51       | expr INC
   52       | expr DEC
   53       | expr MOD expr
   54       | expr IAND expr
   55       | expr IOR expr
   56       | expr XOR expr
   57       | NOT expr
   58       | expr SHL expr
   59       | expr SHR expr
   60       | expr AND expr
   61       | expr OR expr
   62       | OPPSITE expr
   63       | LP expr RP
   64       | NUMBER
   65       | ID
   66       | CHARACTER
   67       | MINUS expr

   68  MAINF : MAIN


##############################################################################
# States
##############################################################################

state 0
	$accept : . functionmain $end

	MAIN  shift 1

	functionmain  goto 2
	MAINF  goto 3


state 1
	MAINF : MAIN .  (68)

	.  reduce 68


state 2
	$accept : functionmain . $end  (0)

	$end  accept


state 3
	functionmain : MAINF . LP RP LB stmt_list RB

	LP  shift 4


state 4
	functionmain : MAINF LP . RP LB stmt_list RB

	RP  shift 5


state 5
	functionmain : MAINF LP RP . LB stmt_list RB

	LB  shift 6


state 6
	functionmain : MAINF LP RP LB . stmt_list RB

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	stmt_list  goto 26
	stmts  goto 27
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 30
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 7
	stmt : LB . stmt_list RB
	stmt : LB . RB

	LB  shift 7
	RB  shift 38
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	stmt_list  goto 39
	stmts  goto 27
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 30
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 8
	expr : LP . expr RP

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 41


state 9
	stmt : SEMI .  (13)

	.  reduce 13


state 10
	expr : MINUS . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 42


state 11
	expr : NOT . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 43


state 12
	expr : OPPSITE . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 44


state 13
	expr : CHARACTER .  (66)

	.  reduce 66


state 14
	type_expr : INT .  (19)

	.  reduce 19


state 15
	type_expr : CHAR .  (20)

	.  reduce 20


state 16
	expr : NUMBER .  (64)

	.  reduce 64


state 17
	expr : ID .  (65)
	id_expr1 : ID .  (39)

	ASSIGN  reduce 39
	.  reduce 65


state 18
	for_stmt : FOR . LP infor_stmt SEMI for_expr SEMI infor_stmt RP stmt

	LP  shift 45


state 19
	while_stmt : WHILE . LP expr RP stmt

	LP  shift 46


state 20
	dowhile_stmt : DO . stmt WHILE LP expr RP

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 47
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 21
	if_stmt : IF . LP expr RP stmt
	if_stmt : IF . LP expr RP stmt ELSE stmt

	LP  shift 48


state 22
	input_stmt : INPUT . LP id_expr1 RP

	LP  shift 49


state 23
	output_stmt : OUTPUT . LP expr RP

	LP  shift 50


state 24
	declare_stmt : type_expr . declare other_declare
	declare_stmt : type_expr . declare

	ID  shift 51

	declare  goto 52
	id_expr2  goto 53


state 25
	assign_stmt : id_expr1 . ASSIGN expr

	ASSIGN  shift 54


state 26
	functionmain : MAINF LP RP LB stmt_list . RB

	RB  shift 55


state 27
	stmt_list : stmts .  (2)

	.  reduce 2


state 28
	stmt : input_stmt . SEMI

	SEMI  shift 56


state 29
	stmt : dowhile_stmt .  (11)

	.  reduce 11


state 30
	stmts : stmt . stmts
	stmts : stmt .  (4)

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23
	.  reduce 4

	type_expr  goto 24
	id_expr1  goto 25
	stmts  goto 57
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 30
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 31
	stmt : assign_stmt . SEMI

	SEMI  shift 58


state 32
	stmt : declare_stmt . SEMI

	SEMI  shift 59


state 33
	stmt : if_stmt .  (8)

	.  reduce 8


state 34
	stmt : while_stmt .  (9)

	.  reduce 9


state 35
	stmt : output_stmt . SEMI

	SEMI  shift 60


state 36
	stmt : for_stmt .  (10)

	.  reduce 10


state 37
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr
	stmt : expr . SEMI

	SEMI  shift 61
	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81


state 38
	stmt : LB RB .  (14)

	.  reduce 14


state 39
	stmt : LB stmt_list . RB

	RB  shift 82


state 40
	expr : ID .  (65)

	.  reduce 65


state 41
	expr : LP expr . RP
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	RP  shift 83
	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81


state 42
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr
	expr : MINUS expr .  (67)

	INC  shift 72
	DEC  shift 73
	.  reduce 67


state 43
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : NOT expr .  (57)
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	INC  shift 72
	DEC  shift 73
	.  reduce 57


state 44
	expr : OPPSITE expr .  (62)
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	INC  shift 72
	DEC  shift 73
	.  reduce 62


state 45
	for_stmt : FOR LP . infor_stmt SEMI for_expr SEMI infor_stmt RP stmt
	infor_stmt : .  (35)

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	.  reduce 35

	type_expr  goto 24
	infor_stmt  goto 84
	id_expr1  goto 25
	assign_stmt  goto 85
	declare_stmt  goto 86
	expr  goto 87


state 46
	while_stmt : WHILE LP . expr RP stmt

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 88


state 47
	dowhile_stmt : DO stmt . WHILE LP expr RP

	WHILE  shift 89


state 48
	if_stmt : IF LP . expr RP stmt
	if_stmt : IF LP . expr RP stmt ELSE stmt

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 90


state 49
	input_stmt : INPUT LP . id_expr1 RP

	ID  shift 91

	id_expr1  goto 92


state 50
	output_stmt : OUTPUT LP . expr RP

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 93


state 51
	id_expr2 : ID .  (40)

	.  reduce 40


state 52
	declare_stmt : type_expr declare . other_declare
	declare_stmt : type_expr declare .  (17)

	COMMA  shift 94
	.  reduce 17

	other_declare  goto 95


state 53
	declare : id_expr2 .  (22)
	declare : id_expr2 . ASSIGN expr

	ASSIGN  shift 96
	.  reduce 22


state 54
	assign_stmt : id_expr1 ASSIGN . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 97


state 55
	functionmain : MAINF LP RP LB stmt_list RB .  (1)

	.  reduce 1


state 56
	stmt : input_stmt SEMI .  (16)

	.  reduce 16


state 57
	stmts : stmt stmts .  (3)

	.  reduce 3


state 58
	stmt : assign_stmt SEMI .  (6)

	.  reduce 6


state 59
	stmt : declare_stmt SEMI .  (5)

	.  reduce 5


state 60
	stmt : output_stmt SEMI .  (15)

	.  reduce 15


state 61
	stmt : expr SEMI .  (12)

	.  reduce 12


state 62
	expr : expr PLUS . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 98


state 63
	expr : expr MINUS . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 99


state 64
	expr : expr MUL . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 100


state 65
	expr : expr DIV . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 101


state 66
	expr : expr EQ . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 102


state 67
	expr : expr NZ . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 103


state 68
	expr : expr LE . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 104


state 69
	expr : expr GE . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 105


state 70
	expr : expr LT . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 106


state 71
	expr : expr GT . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 107


state 72
	expr : expr INC .  (51)

	.  reduce 51


state 73
	expr : expr DEC .  (52)

	.  reduce 52


state 74
	expr : expr MOD . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 108


state 75
	expr : expr IAND . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 109


state 76
	expr : expr IOR . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 110


state 77
	expr : expr XOR . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 111


state 78
	expr : expr SHL . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 112


state 79
	expr : expr SHR . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 113


state 80
	expr : expr AND . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 114


state 81
	expr : expr OR . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 115


state 82
	stmt : LB stmt_list RB .  (7)

	.  reduce 7


state 83
	expr : LP expr RP .  (63)

	.  reduce 63


state 84
	for_stmt : FOR LP infor_stmt . SEMI for_expr SEMI infor_stmt RP stmt

	SEMI  shift 116


state 85
	infor_stmt : assign_stmt .  (32)

	.  reduce 32


state 86
	infor_stmt : declare_stmt .  (33)

	.  reduce 33


state 87
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	infor_stmt : expr .  (34)
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81
	.  reduce 34


state 88
	while_stmt : WHILE LP expr . RP stmt
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	RP  shift 117
	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81


state 89
	dowhile_stmt : DO stmt WHILE . LP expr RP

	LP  shift 118


state 90
	if_stmt : IF LP expr . RP stmt
	if_stmt : IF LP expr . RP stmt ELSE stmt
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	RP  shift 119
	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81


state 91
	id_expr1 : ID .  (39)

	.  reduce 39


state 92
	input_stmt : INPUT LP id_expr1 . RP

	RP  shift 120


state 93
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	output_stmt : OUTPUT LP expr . RP
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	RP  shift 121
	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81


state 94
	other_declare : COMMA . declare other_declare
	other_declare : COMMA . declare

	ID  shift 51

	declare  goto 122
	id_expr2  goto 53


state 95
	declare_stmt : type_expr declare other_declare .  (18)

	.  reduce 18


state 96
	declare : id_expr2 ASSIGN . expr

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 123


state 97
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	assign_stmt : id_expr1 ASSIGN expr .  (36)
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81
	.  reduce 36


state 98
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr PLUS expr .  (41)
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	.  reduce 41


state 99
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr MINUS expr .  (42)
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	.  reduce 42


state 100
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr MUL expr .  (43)
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	INC  shift 72
	DEC  shift 73
	.  reduce 43


state 101
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr DIV expr .  (44)
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	INC  shift 72
	DEC  shift 73
	.  reduce 44


state 102
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr EQ expr .  (45)
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 45


state 103
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr NZ expr .  (46)
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 46


state 104
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr LE expr .  (47)
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 47


state 105
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr GE expr .  (48)
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 48


state 106
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr LT expr .  (49)
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 49


state 107
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr GT expr .  (50)
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 50


state 108
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr MOD expr .  (53)
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	INC  shift 72
	DEC  shift 73
	.  reduce 53


state 109
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr IAND expr .  (54)
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	SHL  shift 78
	SHR  shift 79
	.  reduce 54


state 110
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr IOR expr .  (55)
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	.  reduce 55


state 111
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr XOR expr .  (56)
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	SHL  shift 78
	SHR  shift 79
	.  reduce 56


state 112
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr SHL expr .  (58)
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	.  reduce 58


state 113
	expr : expr . AND expr
	expr : expr SHR expr .  (59)
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	.  reduce 59


state 114
	expr : expr AND expr .  (60)
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	.  reduce 60


state 115
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr OR expr .  (61)
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	.  reduce 61


state 116
	for_stmt : FOR LP infor_stmt SEMI . for_expr SEMI infor_stmt RP stmt
	for_expr : .  (31)

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40
	.  reduce 31

	for_expr  goto 124
	expr  goto 125


state 117
	while_stmt : WHILE LP expr RP . stmt

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 126
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 118
	dowhile_stmt : DO stmt WHILE LP . expr RP

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	NUMBER  shift 16
	ID  shift 40

	expr  goto 127


state 119
	if_stmt : IF LP expr RP . stmt
	if_stmt : IF LP expr RP . stmt ELSE stmt

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 128
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 120
	input_stmt : INPUT LP id_expr1 RP .  (37)

	.  reduce 37


state 121
	output_stmt : OUTPUT LP expr RP .  (38)

	.  reduce 38


state 122
	other_declare : COMMA declare . other_declare
	other_declare : COMMA declare .  (24)

	COMMA  shift 94
	.  reduce 24

	other_declare  goto 129


state 123
	declare : id_expr2 ASSIGN expr .  (21)
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81
	.  reduce 21


state 124
	for_stmt : FOR LP infor_stmt SEMI for_expr . SEMI infor_stmt RP stmt

	SEMI  shift 130


state 125
	for_expr : expr .  (30)
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81
	.  reduce 30


state 126
	while_stmt : WHILE LP expr RP stmt .  (27)

	.  reduce 27


state 127
	dowhile_stmt : DO stmt WHILE LP expr . RP
	expr : expr . AND expr
	expr : expr . SHR expr
	expr : expr . IAND expr
	expr : expr . GT expr
	expr : expr . MOD expr
	expr : expr . IOR expr
	expr : expr . LE expr
	expr : expr . MINUS expr
	expr : expr . XOR expr
	expr : expr . DIV expr
	expr : expr . EQ expr
	expr : expr . PLUS expr
	expr : expr . MUL expr
	expr : expr . NZ expr
	expr : expr . GE expr
	expr : expr . LT expr
	expr : expr . INC
	expr : expr . DEC
	expr : expr . SHL expr
	expr : expr . OR expr

	RP  shift 131
	PLUS  shift 62
	MINUS  shift 63
	MUL  shift 64
	DIV  shift 65
	EQ  shift 66
	NZ  shift 67
	LE  shift 68
	GE  shift 69
	LT  shift 70
	GT  shift 71
	INC  shift 72
	DEC  shift 73
	MOD  shift 74
	IAND  shift 75
	IOR  shift 76
	XOR  shift 77
	SHL  shift 78
	SHR  shift 79
	AND  shift 80
	OR  shift 81


state 128
	if_stmt : IF LP expr RP stmt .  (25)
	if_stmt : IF LP expr RP stmt . ELSE stmt

	ELSE  shift 132
	.  reduce 25


state 129
	other_declare : COMMA declare other_declare .  (23)

	.  reduce 23


state 130
	for_stmt : FOR LP infor_stmt SEMI for_expr SEMI . infor_stmt RP stmt
	infor_stmt : .  (35)

	LP  shift 8
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	.  reduce 35

	type_expr  goto 24
	infor_stmt  goto 133
	id_expr1  goto 25
	assign_stmt  goto 85
	declare_stmt  goto 86
	expr  goto 87


state 131
	dowhile_stmt : DO stmt WHILE LP expr RP .  (28)

	.  reduce 28


state 132
	if_stmt : IF LP expr RP stmt ELSE . stmt

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 134
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 133
	for_stmt : FOR LP infor_stmt SEMI for_expr SEMI infor_stmt . RP stmt

	RP  shift 135


state 134
	if_stmt : IF LP expr RP stmt ELSE stmt .  (26)

	.  reduce 26


state 135
	for_stmt : FOR LP infor_stmt SEMI for_expr SEMI infor_stmt RP . stmt

	LB  shift 7
	LP  shift 8
	SEMI  shift 9
	MINUS  shift 10
	NOT  shift 11
	OPPSITE  shift 12
	CHARACTER  shift 13
	INT  shift 14
	CHAR  shift 15
	NUMBER  shift 16
	ID  shift 17
	FOR  shift 18
	WHILE  shift 19
	DO  shift 20
	IF  shift 21
	INPUT  shift 22
	OUTPUT  shift 23

	type_expr  goto 24
	id_expr1  goto 25
	input_stmt  goto 28
	dowhile_stmt  goto 29
	stmt  goto 136
	assign_stmt  goto 31
	declare_stmt  goto 32
	if_stmt  goto 33
	while_stmt  goto 34
	output_stmt  goto 35
	for_stmt  goto 36
	expr  goto 37


state 136
	for_stmt : FOR LP infor_stmt SEMI for_expr SEMI infor_stmt RP stmt .  (29)

	.  reduce 29


##############################################################################
# Summary
##############################################################################

46 token(s), 22 nonterminal(s)
69 grammar rule(s), 137 state(s)


##############################################################################
# End of File
##############################################################################
