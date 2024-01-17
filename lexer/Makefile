all: lexer

lexer: lexer.lex
	flex lexer.lex
	gcc -o lexer lex.yy.c -lfl