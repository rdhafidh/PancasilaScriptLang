grammar PancasilaScriptLang; 
 
prog:  stat+ EOF; 

stat: exprList
	| assign ';'
	| initNDimArray ';'
	| ifExpr
	| funcDef
	| whileExpr
	;

exprList: expr ';' (expr ';')*  ;	

expr:   expr op=('*'|'/') expr  # HandleMulDiv
    |   expr op=('+'|'-') expr  # HandlePlusMinus 
	|   MIN? INT                # HandleInt
	|   MIN? FLOAT 				# HandleFloat
	|   MIN? funcCommand  		# HandleFunction
	|   TRUE					# HandleTrue
	|   FALSE					# HandleFalse
	|   idMemberFuncProprety	# HandleIDMemberFuncProperty
	|   MIN? ID  				# HandleIdentifier
    |   '(' expr ')'  			# HandleBrackets
    ;
	 
assign: ID '=' expr    # HandleAssign
	| ID '=' arrayExprs   # HandleAssignArray
	| ID '+=' expr	   # HandleAssignAdd
	| ID '-=' expr     # HandleAssignSub
	| ID '*=' expr     # HandleAssignMul
	| ID '/=' expr     # HandleAssignDiv
    ;
	
exprBool : boolType 
		| boolType EQ boolType
		| boolType NOTEQ boolType
		| boolType GR boolType
		| boolType LT boolType
		| boolType GREQ boolType
		| boolType LTEQ boolType 
		;
		
arrayExprs : '[' expr (',' expr)* ']'	
		;
		
boolType : MIN? INT  
		| funcCommand  
		| TRUE
		| FALSE 
		| ID 
		; 
		
exprLine : expr ';'
		| initNDimArray ';'
		| assign ';'
		;
 
exprScopeBlock : whileExpr | exprLine | ifExpr
		; 
 
ifExpr : IF '(' exprBool ')' '{' exprScopeBlock+ '}' ( ELSEIF '(' exprBool ')' '{' exprScopeBlock+ '}' )*
		( ELSE '{' exprScopeBlock+ '}' )?
		; 
	
whileExpr : WHILE '(' exprBool ')' '{' exprScopeBlock+ '}'  
		;
		
funcArgsDef : ID ( ',' ID )*  
		;
		
funcExpr : expr ';'
		| initNDimArray ';'
		| assign ';'
		| ifExpr
		;
		
funcRet : FNRET expr ';'
		| arrayExprs
		;

funcDef : FNFUNC ID '(' funcArgsDef ')' '{' (funcExpr)* funcRet? '}' # HandleDeclareFunctionWithArgs
		| FNFUNC ID '(' ')' '{' (funcExpr)* funcRet? '}' # HandleDeclareFunctionWithoutArgs
		;
		
funcArgs : expr ( ',' expr )*
		;
		
funcCommand : ID '(' funcArgs ')'
		;

idMemberFuncProprety : ID '.' ID '(' expr (','  expr)*  ')'  
		;

initNDimArray : ID TANDANDIMARRAYINIT ( TANDANDIMARRAYINIT )* 
	;
		
TANDANDIMARRAYINIT : '[]'
		;
	
WHILE : [Ww] [Hh] [Ii] [Ll] [Ee]
		;
		
FNFUNC : [fF] [Nn]
		;
		
FNRET : [Rr] [Ee] [Tt] 
	 | [Kk] [Ee] [Mm] [Bb] [Aa] [Ll] [Ii]
	;
	
INT :  DIGIT+ ; 

FLOAT :  DIGIT+ '.' DIGIT*  
    | '.' DIGIT+ 
    ; 

IF : [Ii] [fF] 
	| [jJ] [iI] [Kk] [Aa]
	;
	
ELSEIF : [Ee] [Ll] [Ss] [Ee] [Ii] [Ff]
		| [Ll] [Aa] [Ii] [Nn] [Jj] [Ii] [Kk] [Aa]
		;
		
ELSE : [eE] [lL] [sS] [Ee]
	| [Ss] [Ee] [bB] [aA] [lL] [iI] [Kk] [Nn] [Yy] [Aa]
	; 
	
FALSE : [Ff] [Aa] [Ll] [Ss] [Ee]
	| [Ss] [Aa] [Ll] [Aa] [Hh]
	;
	
TRUE : [Tt] [Rr] [Uu] [Ee]
	| [Bb] [Ee] [Nn] [Aa] [Rr]
	;
	 
EQ : '=';

NOTEQ : '!=';

GR : '>';

LT : '<';

GREQ : '>=';

LTEQ : '<=';
	
MIN : '-' ;

fragment DIGIT : [0-9] ;
 
ID  :  [a-zA-Z0-9_]+ ;

WS : [ \t\r\n] + -> skip ;