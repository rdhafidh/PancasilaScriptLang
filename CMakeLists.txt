cmake_minimum_required(VERSION 3.11)

project(pancasilaScript)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(ANTLR_HOMEDIR "")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(PACKAGE_LANGNAME "PancasilaScriptLang")
SET(grammarfname ${PACKAGE_LANGNAME}) 
set(ROOT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(ANTLR_JAR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/antlr4.jar)
set(GRAMMAR_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/${grammarfname}.g4  ${CMAKE_CURRENT_SOURCE_DIR}/${grammarfname}Lexer.g4)

find_package(Java COMPONENTS Runtime REQUIRED)
set(ANTLR_INCLUDE_DIRS "")
set(ANTLR_LIB "") 

if(WIN32)
    SET(ANTLR_HOMEDIR "D:/masteraplikasi/transferh11nov/antlrgit/msvc")
    IF(CMAKE_BUILD_TYPE STREQUAL "Debug")
        SET (ANTLR_LIB ${ANTLR_HOMEDIR}/debug/lib/antlr4-runtime-static.lib)
        SET (ANTLR_INCLUDE_DIRS ${ANTLR_HOMEDIR}/debug/include ${ANTLR_HOMEDIR}/debug/include/antlr4-runtime)
    endif ()
    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        SET (ANTLR_LIB ${ANTLR_HOMEDIR}/release/lib/antlr4-runtime-static.lib)    
        SET (ANTLR_INCLUDE_DIRS ${ANTLR_HOMEDIR}/release/include ${ANTLR_HOMEDIR}/release/include/antlr4-runtime)
    ENDIF()
endif(WIN32) 

include_directories (${ANTLR_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/gtest)

add_definitions(-DANTLR4CPP_STATIC)
if(MSVC)
	add_definitions(-D_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING)
endif(MSVC)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)
