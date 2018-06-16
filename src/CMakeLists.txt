add_executable(${PROJECT_NAME} "main.cpp"  
    )
include_directories(${ROOT_SRC_DIR}/lib/pancalib)
target_link_libraries(${PROJECT_NAME} ${ANTLR_LIB})
 
