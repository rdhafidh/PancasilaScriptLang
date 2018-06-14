set (TEST_SRC parsertest.cpp)
include_directories( 
	${CMAKE_CURRENT_SOURCE_DIR}/lib ${CMAKE_CURRENT_SOURCE_DIR}/lib/include
	${ROOT_SRC_DIR}/lib
)

add_executable( testing ${TEST_SRC} ${CMAKE_CURRENT_SOURCE_DIR}/lib/src/gtest-all.cc)

target_link_libraries(testing pancalib ${ANTLR_LIB})
enable_testing()
add_test(NAME test COMMAND testing)