%{
#include <stdio.h>

int column = 1;

%}

%option yylineno

DIGIT       [0-9]
ALPHA       [a-zA-Z]
COMMENT     [#].*\n
WHITESPACE  [ \t\n]+

IDENTIFIER  {ALPHA}+(({ALPHA}|{DIGIT})+)?
NUMBER      {DIGIT}+(\.{DIGIT}+)?

IDENTIFIER_INVALID {DIGIT}+({ALPHA}|{DIGIT})+

%%

"func"      {printf("FUNC DECLERATION\n");}
"return"    {printf("RETURN TOKEN\n");}
"int"       {printf("INT DECELERATION\n");}
"prt"       {printf("PRINT KEYWORD\n");}
"read"      {printf("READ KEYWORD\n");}
"while"     {printf("LOOP KEYWORD\n");}
"if"        {printf("IF KEYWORD\n");}
"else"      {printf("ELSE KEYWORD\n");}
"break"     {printf("BREAK KEYWORD\n");}
"continue"  {printf("CONTINUE KEYWORD\n");}

";"         {printf("SEMICOLON\n");}
","         {printf("COMMA\n");}
"("         {printf("LEFT PAREN\n");}
")"         {printf("RIGHT PAREN\n");}
"{"         {printf("LEFT CURLY\n");}
"}"         {printf("RIGHT CURLY\n");}
"["         {printf("LEFT BRAKET\n");}
"]"         {printf("RIGHT BRACKET\n");}
"+"         {printf("ADDITON OPPERATOR\n");}
"-"         {printf("SUBTRACTION OPPERATOR\n");}
"*"         {printf("MUTIPLICATION OPPERATOR\n");}
"/"         {printf("DIVISION OPPERATOR\n");}
"%"         {printf("MODULUS OPPERATOR\n");}
"="         {printf("ASSIGNMENT OPPERATOR\n");}
"<"         {printf("LESS\n");}
"<="        {printf("LESS EQUAL\n");}
">"         {printf("GREATER\n");}
">="        {printf("GREATER EQUAL\n");}
"==="       {printf("EQUALITY\n");}
"!="        {printf("NOT EQUAL\n");}


{IDENTIFIER}            {printf("IDENTIFIER: %s\n", yytext);}
{NUMBER}                {printf("NUMBER: %s\n", yytext);}
{COMMENT}               {}
{WHITESPACE}            { printf; column += yyleng; }
{IDENTIFIER_INVALID}    { printf("ERROR: Invalid identifier '%s' at line %d, column %d\n", yytext, yylineno, column); column += yyleng; }
.                       { printf("ERROR: Unrecognized symbol '%s' at line %d, column %d\n", yytext, yylineno, column); column += yyleng; }
%%

int main(int argc, char **argv)
{
    yylex();
    return 0;
}

<<<<<<< HEAD
int main(void) {yylex(); return 0;}
=======
int yywrap(void)
{
    return 1;
}
>>>>>>> 34da76838885ebd0feb161978b14f63e8d6a5558
