cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(pancasilaScript)

option(GENERATE_PANCALIB "Generate PancasilaScript Lexer and Parser at build time. Require working java runtime 1.7+. Default is ON" ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(ANTLR_HOMEDIR "")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(PACKAGE_LANGNAME "PancasilaScriptLang")
SET(grammarfname ${PACKAGE_LANGNAME}) 
set(ROOT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(ANTLR_JAR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/antlr4.jar)
set(GRAMMAR_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/${grammarfname}.g4  ${CMAKE_CURRENT_SOURCE_DIR}/${grammarfname}Lexer.g4)

if(GENERATE_PANCALIB)
  find_package(Java COMPONENTS Runtime REQUIRED)
endif(GENERATE_PANCALIB)

set(ANTLR_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/runtime/Cpp/runtime/src)
set(ANTLR_LIB "")

include_directories (${ANTLR_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/gtest)

add_definitions(-DANTLR4CPP_STATIC)
if(MSVC)
	add_definitions(-D_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING)
endif(MSVC)

if(CMAKE_CXX_COMPILER_ID STREQUAL Clang)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
 add_definitions(-Wno-extra-tokens)
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
 set(ANTLR_LIB ${ANTLR_LIB} pthread)
endif()

add_subdirectory(lib)

if(NOT APPLE)
 if(WIN32)
  set(ANTLR_LIB ${ANTLR_LIB} antlr4_static pancalib)  
 else()
  set(ANTLR_LIB ${ANTLR_LIB} localuuid antlr4_static pancalib) 
 endif()
else()
#fixme : On Apple platform
 find_package(COREFOUNDATION_LIBRARY CoreFoundation REQUIRED)
 set(ANTLR_LIB ${ANTLR_LIB} localuuid antlr4_static pancalib ${COREFOUNDATION_LIBRARY})
endif(NOT APPLE)

add_subdirectory(src)
add_subdirectory(test)
