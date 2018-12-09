set (LIB_SRCS 
		testparsing.cc 
                testparsing.h
		parsererrorlistener.cc
                parsererrorlistener.h
                executor.cpp
                executor.h 
                valueabs.cpp 
                env.cpp 
                func.cpp 
                objlist.cpp 
                varianttype.cpp 
                whileloop.cpp
                valueabs.h 
                utilsc.cpp
                utilsc.h
                env.h 
                func.h 
                objlist.h 
                varianttype.h 
                whileloop.h
	)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/generated) 

IF(GENERATE_PANCALIB)
add_custom_command(  
    OUTPUT  
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseVisitor.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Lexer.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp      
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Listener.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Parser.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Visitor.cpp 
  
    COMMAND "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_DIR} -Dlanguage=Cpp -listener -visitor  -package ${PACKAGE_LANGNAME} -o ${CMAKE_CURRENT_SOURCE_DIR}/generated ${GRAMMAR_SRCS}
)  

endif(GENERATE_PANCALIB)

set(ANTLRBASE_SRC    
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseVisitor.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Lexer.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp      
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Listener.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Parser.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Visitor.cpp 
	)
 
add_library(pancalib STATIC ${LIB_SRCS} ${ANTLRBASE_SRC})

if(GENERATE_PANCALIB)
add_custom_command(TARGET pancalib PRE_BUILD COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/generated)
endif(GENERATE_PANCALIB)
