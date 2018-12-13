cmake_minimum_required(VERSION 3.12)
project(TDD)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)
include_directories(.)

set(SOURCE_FILES ArabicToRomanNumeralsConverter.cpp test/tests.cpp test/tests.h ArabicToRomanNumeralsConverter.h main.cpp)

add_executable(TDD ${SOURCE_FILES})
target_link_libraries(TDD gtest gtest_main)