cmake_minimum_required(VERSION 3.13)
project(alcotrip)

set(CMAKE_CXX_STANDARD 17)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(runTests tests.cpp numerical_root.c)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
