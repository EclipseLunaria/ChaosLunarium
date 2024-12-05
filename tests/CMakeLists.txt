cmake_minimum_required(VERSION 3.10)

add_subdirectory(lib/cunit/CUnit)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(TEST_FILES
)

# add_executable(run_arm_tests ${TEST_FILES})

# target_link_libraries(run_arm_tests arm_core cunit)

# target_include_directories(run_arm_tests PRIVATE 
#	${CMAKE_CURRENT_SOURCE_DIR}/../include
#	${CMAKE_CURRENT_SOURCE_DIR}/../internal)

# add_test(NAME ArmCoreUnitTests COMMAND run_arm_tests)
