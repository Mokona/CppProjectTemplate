project(cpp_project_template CXX)
cmake_minimum_required(VERSION 3.0)
enable_testing()

add_subdirectory(src)

# GTest initialization

include(ExternalProject)
set(gtest_settings
    -Dgtest_disable_pthreads:bool=1
    -DBUILD_SHARED_LIBS:bool=0
    -DCMAKE_BUILD_TYPE:string=${CMAKE_BUILD_TYPE})
    
externalproject_add(google_test
    EXCLUDE_FROM_ALL 1
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.7.0
    TLS_VERIFY 1
    UPDATE_DISCONNECTED 1
    CMAKE_ARGS ${gtest_settings}
    INSTALL_COMMAND ""
    LOG_DOWNLOAD 1
    LOG_UPDATE 1
    LOG_BUILD 1
)

ExternalProject_Get_Property(google_test binary_dir)
ExternalProject_Get_Property(google_test source_dir)

set(GOOGLE_TEST_BINARY ${binary_dir})
set(GOOGLE_TEST_SOURCE ${source_dir})

# Main program

set(SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} src)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})

include(ExternalProject)

# Test program

set(SOURCES "tests/main_class_tests.cpp")
set(TEST_SUITE_NAME ${PROJECT_NAME}_tests)

add_executable(${TEST_SUITE_NAME} ${SOURCES})
target_link_libraries(${TEST_SUITE_NAME} src ${GOOGLE_TEST_BINARY}/libgtest.a)
target_include_directories(${TEST_SUITE_NAME} PRIVATE ${GOOGLE_TEST_SOURCE}/include)
add_dependencies(${TEST_SUITE_NAME} google_test)

add_test(TestSuite ${TEST_SUITE_NAME})

