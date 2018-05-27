grammar PancasilaScriptLang; 

prog:   stat+ EOF; 

stat:   expr    ';'  
	| ifExpr
	;

expr:   expr op=('*'|'/') expr 
    |   expr op=('+'|'-') expr    
    |   NUMBER                   
    |   assign                    
    |   '(' expr ')'          
    ;

exprBool : boolType '=' boolType;
		| boolType '!=' boolType;
		| boolType '>' boolType;
		| boolType '<' boolType;
		| boolType '>=' boolType;
		| boolType '<=' boolType; 
		;
		
boolType : NUMBER 
		| TRUE
		| FALSE
		;
		
ifExpr : IF exprBool expr ( ELSEIF exprBool expr )*
		( ELSE expr )?
		;
	
assign: ID '=' expr ';'           
    ;

TRUE : [Tr] [Rr] [Uu] [Ee]
	| [Bb] [Ee] [Nn] [Aa] [Rr]
	;
FALSE : [Ff] [Aa] [Ll] [Ss] [Ee]
	| [Ss] [Aa] [Ll] [Aa] [Hh]
	;

IF : [iI] [Ff]
	| [Jj] [Ii] [Kk] [Aa]
	;
ELSEIF : [Ee] [Ll] [Ss] [Ee] [Ii] [Ff]
	|  [Bb] [Aa] [Ll] [Kk] [Nn] [Yy] [Aa]
	;
ELSE : [Ee] [Ll] [Ss] [Ee]
	|  [Ss] [Ee] [Bb] [Aa] [Ll] [Kk] [Nn] [Yy] [Aa]
	; 
ID  :   [a-zA-Z]+ ;     
DIGIT : [0-9] ;		
INT :  DIGIT+ ;
          
FLOAT :  Digit+ '.' Digit* ExponentPart?
    | '.' Digit+ ExponentPart?
    | Digit+ ExponentPart
    ;
	
NUMBER : MIN? INT 
		| MIN? FLOAT ;
	
MIN : '-' ;
ExponentPart
    : [eE] [+-]? Digit+
    ;
 
WS : [ \t\r\n] + -> skip ;