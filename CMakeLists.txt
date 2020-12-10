# cmake_minimum_required(VERSION <specify CMake version here>)
project(oop_lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop_lab2 main.cpp Triangle.cpp Triangle.hpp EquilateralTriangle.cpp EquilateralTriangle.hpp IsoscelesTriangle.cpp IsoscelesTriangle.hpp)
