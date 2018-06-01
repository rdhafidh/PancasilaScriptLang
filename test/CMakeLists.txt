
set (TEST_SRC parsertest.cpp)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/lib ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)



add_executable( testing ${TEST_SRC} ${CMAKE_CURRENT_SOURCE_DIR}/lib/src/gtest-all.cc)


enable_testing()
add_test(NAME testing COMMAND testing)