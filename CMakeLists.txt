cmake_minimum_required(VERSION 2.8.12)

project(panca1)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(ANTLR_HOMEDIR "")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(PACKAGE_LANGNAME "PancasilaScriptLang")
SET(grammarfname ${PACKAGE_LANGNAME}) 

set(ANTLR_JAR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/antlr4.jar)
set(GRAMMAR_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/${grammarfname}.g4  ${CMAKE_CURRENT_SOURCE_DIR}/${grammarfname}Lexer.g4)
add_subdirectory (src)
add_subdirectory(test)
