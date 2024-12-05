cmake_minimum_required(VERSION 3.28)
project(chaos_lunarium_core C)


add_subdirectory(lib/SDL)
include(include)

set(SOURCE_FILES
	src/main.c
)

add_executable(main ${SOURCE_FILES})


target_include_directories(main PRIVATE 
	lib/SDL/include
)

target_link_libraries(main chaos_lunarium_core SDL)
