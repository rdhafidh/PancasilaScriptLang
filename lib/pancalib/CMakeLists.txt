set (LIB_SRCS 
		testparsing.cc 
		parsererrorlistener.cc 
	)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/generated) 

IF(GENERATE_PANCALIB)
add_custom_command(  
    OUTPUT  
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}BaseListener.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}BaseVisitor.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Lexer.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}BaseListener.cpp      
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Listener.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Parser.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Visitor.cpp 
  
    COMMAND "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_DIR} -Dlanguage=Cpp -listener -visitor  -package ${PACKAGE_LANGNAME} -o ${CMAKE_CURRENT_BINARY_DIR}/generated ${GRAMMAR_SRCS}
)  
endif(GENERATE_PANCALIB)

set(ANTLRBASE_SRC    
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}BaseListener.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}BaseVisitor.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Lexer.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}BaseListener.cpp      
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Listener.cpp 
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Parser.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/generated/${grammarfname}Visitor.cpp 
	)
 
add_library(pancalib STATIC ${LIB_SRCS} ${ANTLRBASE_SRC})

if(GENERATE_PANCALIB)
add_custom_command(TARGET pancalib PRE_BUILD COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/generated)
endif(GENERATE_PANCALIB)