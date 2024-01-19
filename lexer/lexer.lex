%{
#include <stdio.h>
%}

DIGIT [0-9]
ALPHA [a-zA-Z]
COMMENT [#].*\n
ARRAY_ACCESS \[[0-9]+\]
OPERATORS [\+\-\*\/%]

%%

"func" {printf("FUNC\n");}
"prt" {printf("PRINT: %s\n\n", yytext);}
"(" { printf("LEFT_PARENTHESIS: %s\n", yytext); }
")" { printf("RIGHT_PARENTHESIS: %s\n", yytext); }
{DIGIT}+ {printf("NUMBER: %s\n", yytext);}
{ALPHA}+ {printf("IDENTIFIER: %s\n", yytext);}
{ALPHA}+{ARRAY_ACCESS} {printf("ARRAY ACCESS: %s\n", yytext);}
{OPERATORS} {printf("OPERATOR: %s\n", yytext);}
{COMMENT} {}
[\s\t\r\n\f]       {}    
%%

int main(void) {
    yylex();
    return 0;
}
