grammar PancasilaScriptLang; 

options {
	tokenVocab = PancasilaScriptLangLexer;
}

prog:   stat+ EOF; 

stat: expr ';'  
	| ifExpr
	;

expr:   expr op=('*'|'/') expr 
    |   expr op=('+'|'-') expr    
    |   NUMBER                   
    |   assign                    
    |   '(' expr ')'          
    ;

exprBool : boolType EQ boolType
		| boolType NOTEQ boolType
		| boolType GR boolType
		| boolType LT boolType
		| boolType GREQ boolType
		| boolType LTEQ boolType 
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

