project(local_test_uuid)
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

set(UUID_SRC
clear.c
compare.c
copy.c
gen_uuid.c
isnull.c
pack.c
parse.c
randutils.c
unpack.c
unparse.c
uuid_time.c
)

set(uuid_app test_uuid.c)

add_library(localuuid STATIC ${UUID_SRC})
add_executable(local_test_uuid ${uuid_app})
target_link_libraries(local_test_uuid localuuid)



