cmake_minimum_required(VERSION 3.12)
project(TDD)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

set(SOURCE_FILES ArabicToRomanNumeralsConverterTestCase.cpp)

add_executable(TDD ${SOURCE_FILES})
target_link_libraries(TDD gtest gtest_main)