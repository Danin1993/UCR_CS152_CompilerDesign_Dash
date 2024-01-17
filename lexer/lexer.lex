%{
#include <stdio.h>
%}
DIGIT [0-9]
ALPHA [a-zA-Z]
COMMENT [#].*\n
%%
"func" {printf("FUNC\n");}
{DIGIT}+ {printf("NUMBER: %s\n", yytext);}
{ALPHA}+ {printf("TOKEN: %s\n", yytext);}
{COMMENT} {}
[\s\t\r\n\f]       {}    
%%
int main(void) {
    yylex();
    return 0;
}
