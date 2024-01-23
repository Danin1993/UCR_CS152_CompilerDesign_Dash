%{
# include <stdio.h>
%}

DIGIT [0-9]
ALPHA [a-zA-Z]
COMMENT [#].*\n
KEYWORD func|return|int|prt|read|if|else|break|continue
MATH "+"|"-"|"*"|"/"|"%"|"="
SYMBOL ";"|","|"("|")"|"{"|"}"|"["|"]"
COMPARISON "<"|"<="|">"|">="|"==="|"!="
WHITESPACE  [ \t\n]+
IDENTIFIER  {ALPHA}+(({ALPHA}|{DIGIT})+)?
NUMBER      {DIGIT}+(\.{DIGIT}+)?

  
%%

{KEYWORD} {printf("KEYWORD: %s\n", yytext);}
{MATH} {printf("MATH OPERATION: %s\n", yytext);}
{SYMBOL} {printf("SYMBOL: %s\n", yytext);}
{COMPARISON} {printf("COMPARISON SYMBOL: %s\n", yytext);}
{DIGIT}+ {printf("NUMBER: %s\n", yytext);}
{ALPHA}+ {printf("TOKEN: %s\n", yytext);}
{WHITESPACE}    {}
{IDENTIFIER}    {printf("IDENTIFIER: %s\n", yytext);}
{NUMBER}        {printf("NUMBER: %s\n", yytext);}
[\s\t\r\n\f] {}   

%%
int main(void) {
    yylex();
    return 0;
}
