#Check Cmake version
cmake_minimum_required(VERSION 3.0)

#Set C++ version
set(CMAKE_CXX_STANDARD 11)

# Project name
project(GL_L3)

# Set variable
set(SOURCE_EXE main.cpp)
set(SOURCE_LIB tree.cpp)

# Add executable file & library
add_executable(main ${SOURCE_EXE})
add_library(tree STATIC ${SOURCE_LIB})

#Link program & library
target_link_libraries(main tree)