lexer grammar PancasilaScriptLangLexer;

TRUE : [Tr] [Rr] [Uu] [Ee]
	| [Bb] [Ee] [Nn] [Aa] [Rr]
	;
FALSE : [Ff] [Aa] [Ll] [Ss] [Ee]
	| [Ss] [Aa] [Ll] [Aa] [Hh]
	;

EQ : '=';

NOTEQ : '!=';

GR : '>';

LT : '<';

GREQ : '>=';

LTEQ : '<=';

IF : [iI] [Ff]
	| [Jj] [Ii] [Kk] [Aa]
	;
	
ELSEIF : [Ee] [Ll] [Ss] [Ee] [Ii] [Ff]
	|  [Bb] [Aa] [Ll] [Ii] [Kk] [Nn] [Yy] [Aa]
	;
	
ELSE : [Ee] [Ll] [Ss] [Ee]
	|  [Ss] [Ee] [Bb] [Aa] [Ll] [Ii] [Kk] [Nn] [Yy] [Aa]
	; 
	
ID  :  [a-zA-Z]+ ;     
 

FLOAT :  DIGIT+ '.' DIGIT* ExponentPart?
    | '.' DIGIT+ ExponentPart?
    | DIGIT+ ExponentPart
    ;
	
INT :  DIGIT+ ; 

ExponentPart : [eE] [+-]? DIGIT+ ;
	 
NUMBER : MIN? INT 
		| MIN? FLOAT ;
	
MIN : '-' ;

fragment DIGIT : [0-9] ;
 
WS : [ \t\r\n] + -> skip ;