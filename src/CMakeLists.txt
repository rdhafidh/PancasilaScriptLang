add_executable(${PROJECT_NAME} "main.cpp"  
    )
include_directories(${ROOT_SRC_DIR}/lib)
target_link_libraries(${PROJECT_NAME} pancalib ${ANTLR_LIB})
 