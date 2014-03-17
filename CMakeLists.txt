project(CppMinimalTest)
cmake_minimum_required(VERSION 2.8)

aux_source_directory(. SRC_LIST)
aux_source_directory(src/ SRC_LIST)
# aux_source_directory(tests/ SRC_LIST)

include_directories(.)
add_executable(${PROJECT_NAME} ${SRC_LIST})

# enable_testing()
# set(GTEST_ROOT "D:\\Dev\\Extern\\gtest-1.7.0-build")
# set(GTEST_INCLUDE_DIR "D:\\Dev\\Extern\\gtest-1.7.0\\include")
# find_package(gtest)

# include_directories(${GTEST_INCLUDE_DIRS})
# add_executable(test_suite "tests/main_class_tests.cpp")
# target_link_libraries(test_suite ${GTEST_BOTH_LIBRARIES})

