# simple-c-compiler
 a simple c language compiler 一个很简单的c编译器，仅支持少部分的简单功能



编译原理课程的大作业，支持简单的if，else，while，for和简单的整数浮点数的赋值，计算和输入输出语句。

zeinanshou目录中是源代码，为一个Parser Generator项目，yacc和lex程序在myparser.y和mylex.l中

编译好的程序读取D盘的tmp.c文件，输出到D盘的out.asm文件中，输出的为MASM32汇编程序，需要用MASM32的汇编器变成二进制可执行文件。