# 1. Set the minimum required CMake version
cmake_minimum_required(VERSION 4.3.2)

# 2. Define the project name and programming language (e.g., CXX for C++)
project(MyQtApp VERSION 1.0.0 LANGUAGES CXX)

# 3. Specify the C++ standard (Optional, but highly recommended)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable automatic Qt tool processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

# Define executable with source files
qt_add_executable(MyQtApp
    main.cpp
)

target_link_libraries(MyQtApp PRIVATE Qt6::Widgets)
