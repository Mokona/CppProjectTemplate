project(cpp_minimal_test)
cmake_minimum_required(VERSION 2.8)

aux_source_directory(. SRC_LIST)
aux_source_directory(src/ SRC_LIST)
# aux_source_directory(tests/ SRC_LIST)

include_directories(.)
add_executable(${PROJECT_NAME} ${SRC_LIST})

# GTest initialization

enable_testing()
set(GTEST_ROOT "./extern/gtest")
find_package(GTest REQUIRED)

# Test builds
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_suite "tests/main_class_tests.cpp")
target_link_libraries(test_suite ${GTEST_LIBRARIES})
add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
add_definitions(--std=c++11)

add_test(TestSuite test_suite)
