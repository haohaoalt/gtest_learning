cmake_minimum_required(VERSION 2.8.12)

project(gflags_demo)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(include)

add_executable(gtest_demo_1 gtest_demo_1.cc)
target_link_libraries(gtest_demo_1 gtest)

add_executable(gflags_demo_1 gflags_demo_1.cc)
target_link_libraries(gflags_demo_1 gflags)
