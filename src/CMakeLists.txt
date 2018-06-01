set(LIBS "") 
find_package(Java COMPONENTS Runtime REQUIRED)
if(WIN32)
    SET(ANTLR_HOMEDIR "D:/masteraplikasi/transferh11nov/antlrgit/msvc")
    IF(CMAKE_BUILD_TYPE STREQUAL "Debug")
        SET (LIBS ${ANTLR_HOMEDIR}/debug/lib/antlr4-runtime-static.lib)
        include_directories (${ANTLR_HOMEDIR}/debug/include ${ANTLR_HOMEDIR}/debug/include/antlr4-runtime)
    endif ()
    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        SET (LIBS ${ANTLR_HOMEDIR}/release/lib/antlr4-runtime-static.lib)    
        include_directories (${ANTLR_HOMEDIR}/release/include ${ANTLR_HOMEDIR}/release/include/antlr4-runtime)
    ENDIF()
endif(WIN32) 

include_directories ({CMAKE_CURRENT_SOURCE_DIR}/gtest)

add_custom_command(TARGET GEN_DIR PRE_BUILD COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/generated)

add_custom_command(  
    OUTPUT  
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseVisitor.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Lexer.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp      
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Listener.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Parser.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Visitor.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseVisitor.h
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Lexer.h
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.h     
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Listener.h  
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Parser.h  
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Visitor.h  
    
    COMMAND "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_DIR} -Dlanguage=Cpp -listener -visitor  -package ${PACKAGE_LANGNAME} -o ${CMAKE_CURRENT_SOURCE_DIR}/generated ${GRAMMAR_SRCS}
)  


add_custom_target (req_build_src DEPENDS  
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp 
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseVisitor.cpp 
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Lexer.cpp 
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.cpp      
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Listener.cpp 
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Parser.cpp
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Visitor.cpp 
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.h 
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseVisitor.h
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Lexer.h
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}BaseListener.h     
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Listener.h  
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Parser.h  
                                ${CMAKE_CURRENT_SOURCE_DIR}/generated/${grammarfname}Visitor.h  
                                )

FILE(GLOB_RECURSE ANTLRBASE_SRC ${CMAKE_CURRENT_SOURCE_DIR}/generated/*.cpp)


add_executable(${PROJECT_NAME} "main.cpp"   ${ANTLRBASE_SRC} 
    )


target_link_libraries(${PROJECT_NAME} )
 
add_dependencies (${PROJECT_NAME} GEN_DIR req_build_src)