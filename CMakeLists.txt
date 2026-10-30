cmake_minimum_required(VERSION 3.25)

# This tells the compiler to prepare a standard Geode project
project(SimpleNoclip VERSION 1.0.0 LANGUAGES CXX)

# Links the official Geode SDK framework to your code
find_package(Geode REQUIRED)

# Instructs the build engine to compile your main script file
add_geode_mod(jaiden.simplenoclip 
    src/main.cpp
)
