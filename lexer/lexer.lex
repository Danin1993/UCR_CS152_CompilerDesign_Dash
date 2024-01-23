%{
# include <stdio.h>
%}

DIGIT [0-9]
ALPHA [a-zA-Z]
COMMENT [#].*\n

%%
"func" {printf("FUNC DECLERATION\n");}
"return" {printf("RETURN TOKEN\n");}
"int" {printf("INT DECELERATION\n");}
"prt" {printf("PRINT KEYWORD\n");}
"read" {printf("READ KEYWORD\n");}
"while" {printf("LOOP KEYWORD\n");}
"if" {printf("IF KEYWORD\n");}
"else" {printf("ELSE KEYWORD\n");}
"break" {printf("BREAK KEYWORD\n");}
"continue" {printf("CONTINUE KEYWORD\n");}
";" {printf("SEMICOLON\n");}
"," {printf("COMMA\n");}
"(" {printf("LEFT PAREN\n");}
")" {printf("RIGHT PAREN\n");}
"{" {printf("LEFT CURLY\n");}
"}" {printf("RIGHT CURLY\n");}
"[" {printf("LEFT BRAKET\n");}
"]" {printf("RIGHT BRACKET\n");}
"," {printf("COMMA\n");}
"+" {printf("ADDITON OPPERATOR\n");}
"-" {printf("SUBTRACTION OPPERATOR\n");}
"*" {printf("MUTIPLICATION OPPERATOR\n");}
"/" {printf("DIVISION OPPERATOR\n");}
"%" {printf("MODULUS OPPERATOR\n");}
"=" {printf("ASSIGNMENT OPPERATOR\n");}
"<" {printf("LESS\n");}
"<=" {printf("LESS EQUAL\n");}
">" {printf("GREATER\n");}
">=" {printf("GREATER EQUAL\n");}
"===" {printf("EQUALITY\n");}
"!=" {printf("NOT EQUAL\n");}


{DIGIT}+ {printf("NUMBER: %s\n", yytext);}
{ALPHA}+ {printf("TOKEN: %s\n", yytext);}
{COMMENT} {}
[\s\t\r\n\f]       {}    
%%
int main(void) {
    yylex();
    return 0;
}
