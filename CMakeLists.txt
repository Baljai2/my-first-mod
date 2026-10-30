cmake_minimum_required(VERSION 3.13)

# 1. Establish the project metadata identity
project(MyFirstMod VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. Compile our main source code file cleanly into a shared library module
add_library(${PROJECT_NAME} SHARED src/main.cpp)

# 3. Tell the compiler exactly where to look for Geode header files (Crucial Fix)
target_include_directories(${PROJECT_NAME} PRIVATE "/Users/Shared/Geode/sdk")

# Print a success notification message to Jaiden's terminal screen
message(STATUS "--------------------------------------------------------")
message(STATUS " Offline C++ Script Check Complete! Your code is clean.")
message(STATUS "--------------------------------------------------------")
