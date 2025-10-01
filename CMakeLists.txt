# Minimum required version of CMake
cmake_minimum_required(VERSION 3.14)

# Project name
project(MyProgram)

# Set C/C++ standards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra)

# Define source files
set(SRC_FILES src/main.cpp)

# Define the executable
add_executable(my_program ${SRC_FILES})

####################### TESTING STUFF STARTS HERE ###########################################################

enable_testing()
add_subdirectory(tests)