%{
#include <stdio.h>

int column = 1;
int intNum=0;
int intOp=0;
int intEq=0;
int intPar=0;
%}

%option yylineno

DIGIT       [0-9]
ALPHA       [a-zA-Z]
COMMENT     [#].*\n
WHITESPACE  [ \t\n]+
FUNC func
RETURN return
INT int
PRT prt
READ read
WHILE while
IF if
ELSE else
BREAK break
CONTINUE continue
IDENTIFIER  {ALPHA}+(({ALPHA}|{DIGIT})+)?
NUMBER      [+-]?{DIGIT}+(\.{DIGIT}+)?
SCINTIFICNUM {NUMBER}[eE][+-]?{NUMBER}
SEMICOLON  ;
COMMA ,
L_PAR \(
R_PAR \)
L_CURLY \{
R_CURLY \}
L_BRAKET \[
R_BRAKET \]
ADD \+
SUBTRACTION \-
MUTIPLY \*
DIVIDE \/
MOD \%
ASSIGNMENT \=
LESS <
LESS_EQ <=
GREATER >
GREATER_EQ >=
EQUALITY ===
NOT_EQ !=
COMPARISON {LESS}|{LESS_EQ}|{GREATER}|{GREATER_EQ}|{EQUALITY}|{NOT_EQ}
IDENTIFIER_INVALID {DIGIT}+({ALPHA}|{DIGIT})+
ASSIGNMENT_ERROR [=][^ \t\n]	 
ERRORCOM {COMPARISON}[^ \t\n]|"=="

%%
{FUNC}            {printf("FUNCTION DECLERATION \n", yytext);}
{RETURN}            {printf("RETURN STATEMENT \n", yytext);}
{INT}            {printf("INT DECLERATION \n", yytext);}
{PRT}            {printf("PRT STATEMENT \n", yytext);}
{WHILE}            {printf("LOOP DECLERATION \n", yytext);}
{IF}            {printf("IF STATEMENT \n", yytext);}
{ELSE}            {printf("ELSE STATEMENT \n", yytext);}
{BREAK}            {printf("BREAK STATEMENT \n", yytext);}
{CONTINUE}            {printf("CONTINUE STATEMENT \n", yytext);}
{READ}            {printf("READ STATEMENT \n", yytext);}
{SEMICOLON}            {printf("SEMICOLON \n", yytext);}
{COMMA}            {printf("COMMA \n", yytext);}
{L_PAR}            {intPar++; printf("LEFT PAR \n", yytext);}
{R_PAR}            {intPar++; printf("RIGHT PAR \n", yytext);}
{L_CURLY}            {printf("LEFT CURLY \n", yytext);}
{R_CURLY}            {printf("RIGHT CURLY \n", yytext);}
{L_BRAKET}            {printf("LEFT BRAKET \n", yytext);}
{R_BRAKET}            {printf("RIGHT BRAKET \n", yytext);}
{ADD}            {intOp++; printf("ADDITION \n", yytext);}
{SUBTRACTION}            {intOp++; printf("SUBTRACTION \n", yytext);}
{MUTIPLY}            {intOp++; printf("MUTIPLICATION \n", yytext);}
{DIVIDE}            {intOp++; printf("DIVISON \n", yytext);}
{MOD}            {intOp++; printf("MODULO \n", yytext);}
{ASSIGNMENT}            {intEq++;printf("ASSIGNMENT \n", yytext);}



{IDENTIFIER}            {printf("IDENTIFIER: %s\n", yytext);}
{ASSIGNMENT_ERROR}              { printf("ERROR: Unrecognized symbol '%s' at line %d, column %d\n", yytext, yylineno, column); column += yyleng; return -1;}
{NUMBER}                {intNum+=1; printf("NUMBER: %s\n", yytext);}
{SCINTIFICNUM}		{{intNum+=1; printf("SCINTIFIC NUMBER: %s\n", yytext);}}	
{COMMENT}               {/* ignore */}
{WHITESPACE}            { printf; column += yyleng; }
{IDENTIFIER_INVALID}    { printf("ERROR: Invalid identifier '%s' at line %d, column %d\n", yytext, yylineno, column); column += yyleng; return -1; }
{ERRORCOM}              { printf("ERROR: Unrecognized symbol '%s' at line %d, column %d\n", yytext, yylineno, column); column += yyleng; return -1;}
.                       { printf("ERROR: Unrecognized symbol '%s' at line %d, column %d\n", yytext, yylineno, column); column += yyleng; return -1;}
                     
%%

int main(int argc, char **argv)
{
    yylex();
printf( "# of ints = %d\n",intNum);
printf( "# of Opperations = %d\n",intOp);
printf( "# of  parentheses = %d\n",intPar);
printf( "# of equals = %d\n",intEq);

    return 0;
}

int yywrap(void)
{
    return 1;
}
