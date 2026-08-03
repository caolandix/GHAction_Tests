# 1. Set the minimum required CMake version
cmake_minimum_required(VERSION 4.3.2)

# 2. Define the project name and programming language (e.g., CXX for C++)
project(MyProject LANGUAGES CXX)

# 3. Specify the C++ standard (Optional, but highly recommended)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. Define the executable target name and its source files
add_executable(my_program main.cpp)
