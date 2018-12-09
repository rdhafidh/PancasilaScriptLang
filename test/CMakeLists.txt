set (TEST_SRC1 parsertest.cpp)
include_directories( 
	${CMAKE_CURRENT_SOURCE_DIR}/lib ${CMAKE_CURRENT_SOURCE_DIR}/lib/include
	${ROOT_SRC_DIR}/lib/pancalib ${ROOT_SRC_DIR}/lib
)

add_executable( testing ${TEST_SRC1} ${CMAKE_CURRENT_SOURCE_DIR}/lib/src/gtest-all.cc)

target_link_libraries(testing pancalib ${ANTLR_LIB})
enable_testing()
add_test(NAME test1 COMMAND testing)

set (TEST_SRC2 symtest.cpp)


add_executable( symtest ${TEST_SRC2} ${CMAKE_CURRENT_SOURCE_DIR}/lib/src/gtest-all.cc)

target_link_libraries(symtest pancalib ${ANTLR_LIB})
enable_testing()
add_test(NAME test2 COMMAND symtest)

set (TEST_SRC3 varianttest.cpp)


add_executable( varianttest ${TEST_SRC3} ${CMAKE_CURRENT_SOURCE_DIR}/lib/src/gtest-all.cc)

target_link_libraries(varianttest pancalib ${ANTLR_LIB})
enable_testing()
add_test(NAME test3 COMMAND varianttest)

set (TEST_SRC4 utiltest.cpp)


add_executable( utiltest ${TEST_SRC4} ${CMAKE_CURRENT_SOURCE_DIR}/lib/src/gtest-all.cc)

target_link_libraries(utiltest pancalib ${ANTLR_LIB})
enable_testing()
add_test(NAME test4 COMMAND utiltest)
