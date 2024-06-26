cmake_minimum_required(VERSION 3.10)

# Set the project name
project(PalindromeChecker)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the GTest package
find_package(GTest REQUIRED)

# Include GTest directories
include_directories(${GTEST_INCLUDE_DIRS})

# Include directories for the project
include_directories(include)

# Source Files
file(GLOB_RECURSE SOURCES "./source/*.cpp")

# Test Files
file(GLOB_RECURSE TEST_FILES "./test/*.cpp")

# Create a static library from the source files
add_library(palindromeCheckerLib STATIC "./source/PalindromeChecker.cpp")

# Set the unit test target name
set(UNIT_TEST palindromeCheckerTest)

# Create an executable for the unit tests
add_executable(${UNIT_TEST} ${TEST_FILES})

# Link the unit test executable with the static library and GTest libraries
target_link_libraries(${UNIT_TEST} palindromeCheckerLib ${GTEST_LIBRARIES} pthread)

# Add a test to CTest
add_test(NAME ${UNIT_TEST} COMMAND ${UNIT_TEST})

# Add a custom command to run the tests after the build
add_custom_command(
   TARGET ${UNIT_TEST}
   COMMENT "Run tests"
   POST_BUILD 
   COMMAND ${UNIT_TEST}
)

# Create an executable for the main application
add_executable(palindromeChecker ${SOURCES})

# Link the main application with the static library
target_link_libraries(palindromeChecker palindromeCheckerLib)
