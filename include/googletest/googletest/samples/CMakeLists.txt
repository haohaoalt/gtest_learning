cmake_minimum_required(VERSION 2.8.12)

add_executable(sample1_unittest sample1_unittest.cc sample1.cc)
target_link_libraries(sample1_unittest gtest)

add_executable(sample2_unittest sample2_unittest.cc sample2.cc)
target_link_libraries(sample2_unittest gtest)

add_executable(sample3_unittest sample3_unittest.cc)
target_link_libraries(sample3_unittest gtest)

add_executable(sample4_unittest sample4_unittest.cc sample4.cc)
target_link_libraries(sample4_unittest gtest)

add_executable(sample5_unittest sample5_unittest.cc sample1.cc)
target_link_libraries(sample5_unittest gtest)

add_executable(sample6_unittest sample6_unittest.cc)
target_link_libraries(sample6_unittest gtest)

add_executable(sample7_unittest sample7_unittest.cc)
target_link_libraries(sample7_unittest gtest)

add_executable(sample8_unittest sample8_unittest.cc)
target_link_libraries(sample8_unittest gtest)

add_executable(sample9_unittest sample9_unittest.cc)
target_link_libraries(sample9_unittest gtest)

add_executable(sample10_unittest sample10_unittest.cc)
target_link_libraries(sample10_unittest gtest)