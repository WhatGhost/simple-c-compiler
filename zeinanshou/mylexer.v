#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 113 of your 30 day trial period.
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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 01/01/18
# Time: 22:39:17
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "{"

    2  "}"

    3  ";"

    4  "("

    5  ")"

    6  "if"

    7  "else"

    8  "for"

    9  "while"

   10  "do"

   11  "main"

   12  "=="

   13  "!="

   14  "<="

   15  ">="

   16  "<"

   17  ">"

   18  "++"

   19  "--"

   20  "+"

   21  "-"

   22  "*"

   23  "/"

   24  "%"

   25  "="

   26  "&"

   27  "|"

   28  "^"

   29  "~"

   30  "<<"

   31  ">>"

   32  "&&"

   33  "||"

   34  "!"

   35  ","

   36  "input"

   37  "output"

   38  "print"

   39  "int"

   40  "char"

   41  \/\*([^\*\/]|\n)*\*\/

   42  \/\/(.)*\n

   43  [ \t]

   44  \n

   45  [0-9]+

   46  '[a-zA-Z]'

   47  [a-zA-Z]([a-zA-Z0-9])*


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x25               goto 6
	0x26               goto 7
	0x27               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5e               goto 22
	0x61 - 0x62 (2)    goto 21
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 21
	0x69               goto 27
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 28
	0x6e               goto 21
	0x6f               goto 29
	0x70               goto 30
	0x71 - 0x76 (6)    goto 21
	0x77               goto 31
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34
	0x7e               goto 35


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x25               goto 6
	0x26               goto 7
	0x27               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5e               goto 22
	0x61 - 0x62 (2)    goto 21
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 21
	0x69               goto 27
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 28
	0x6e               goto 21
	0x6f               goto 29
	0x70               goto 30
	0x71 - 0x76 (6)    goto 21
	0x77               goto 31
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34
	0x7e               goto 35


state 3
	match 43


state 4
	match 44


state 5
	0x3d               goto 36

	match 34


state 6
	match 24


state 7
	0x26               goto 37

	match 26


state 8
	0x41 - 0x5a (26)   goto 38
	0x61 - 0x7a (26)   goto 38


state 9
	match 4


state 10
	match 5


state 11
	match 22


state 12
	0x2b               goto 39

	match 20


state 13
	match 35


state 14
	0x2d               goto 40

	match 21


state 15
	0x2a               goto 41
	0x2f               goto 42

	match 23


state 16
	0x30 - 0x39 (10)   goto 16

	match 45


state 17
	match 3


state 18
	0x3c               goto 43
	0x3d               goto 44

	match 16


state 19
	0x3d               goto 45

	match 25


state 20
	0x3d               goto 46
	0x3e               goto 47

	match 17


state 21
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 47


state 22
	match 28


state 23
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 48
	0x69 - 0x7a (18)   goto 21

	match 47


state 24
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 49
	0x70 - 0x7a (11)   goto 21

	match 47


state 25
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 50
	0x6d - 0x7a (14)   goto 21

	match 47


state 26
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 51
	0x70 - 0x7a (11)   goto 21

	match 47


state 27
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x65 (5)    goto 21
	0x66               goto 52
	0x67 - 0x6d (7)    goto 21
	0x6e               goto 53
	0x6f - 0x7a (12)   goto 21

	match 47


state 28
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61               goto 54
	0x62 - 0x7a (25)   goto 21

	match 47


state 29
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 55
	0x76 - 0x7a (5)    goto 21

	match 47


state 30
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 56
	0x73 - 0x7a (8)    goto 21

	match 47


state 31
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 57
	0x69 - 0x7a (18)   goto 21

	match 47


state 32
	match 1


state 33
	0x7c               goto 58

	match 27


state 34
	match 2


state 35
	match 29


state 36
	match 13


state 37
	match 32


state 38
	0x27               goto 59


state 39
	match 18


state 40
	match 19


state 41
	0x00 - 0x29 (42)   goto 41
	0x2a               goto 60
	0x2b - 0x2e (4)    goto 41
	0x30 - 0xff (208)  goto 41


state 42
	0x00 - 0x09 (10)   goto 42
	0x0a               goto 61
	0x0b - 0xff (245)  goto 42


state 43
	match 30


state 44
	match 14


state 45
	match 12


state 46
	match 15


state 47
	match 31


state 48
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61               goto 62
	0x62 - 0x7a (25)   goto 21

	match 47


state 49
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 10


state 50
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x72 (18)   goto 21
	0x73               goto 63
	0x74 - 0x7a (7)    goto 21

	match 47


state 51
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 64
	0x73 - 0x7a (8)    goto 21

	match 47


state 52
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 6


state 53
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6f (15)   goto 21
	0x70               goto 65
	0x71 - 0x73 (3)    goto 21
	0x74               goto 66
	0x75 - 0x7a (6)    goto 21

	match 47


state 54
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 67
	0x6a - 0x7a (17)   goto 21

	match 47


state 55
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 68
	0x75 - 0x7a (6)    goto 21

	match 47


state 56
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 69
	0x6a - 0x7a (17)   goto 21

	match 47


state 57
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 70
	0x6a - 0x7a (17)   goto 21

	match 47


state 58
	match 33


state 59
	match 46


state 60
	0x2f               goto 71


state 61
	match 42


state 62
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 72
	0x73 - 0x7a (8)    goto 21

	match 47


state 63
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 73
	0x66 - 0x7a (21)   goto 21

	match 47


state 64
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 8


state 65
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 74
	0x76 - 0x7a (5)    goto 21

	match 47


state 66
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 39


state 67
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 75
	0x6f - 0x7a (12)   goto 21

	match 47


state 68
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6f (15)   goto 21
	0x70               goto 76
	0x71 - 0x7a (10)   goto 21

	match 47


state 69
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 77
	0x6f - 0x7a (12)   goto 21

	match 47


state 70
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 78
	0x6d - 0x7a (14)   goto 21

	match 47


state 71
	match 41


state 72
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 40


state 73
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 7


state 74
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 79
	0x75 - 0x7a (6)    goto 21

	match 47


state 75
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 11


state 76
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 80
	0x76 - 0x7a (5)    goto 21

	match 47


state 77
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 81
	0x75 - 0x7a (6)    goto 21

	match 47


state 78
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 82
	0x66 - 0x7a (21)   goto 21

	match 47


state 79
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 36


state 80
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 83
	0x75 - 0x7a (6)    goto 21

	match 47


state 81
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 38


state 82
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 9


state 83
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x61 - 0x7a (26)   goto 21

	match 37


#############################################################################
# Summary
#############################################################################

1 start state(s)
47 expression(s), 83 state(s)


#############################################################################
# End of File
#############################################################################
