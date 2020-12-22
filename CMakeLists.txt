#cmake_minimum_required(VERSION 3.17)
project(oop_lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop_lab2 main.cpp main.hpp Line.cpp Line.hpp Integer.cpp Integer.hpp Row.cpp Row.hpp Console.cpp Console.hpp LineFactory.cpp LineFactory.hpp ConsoleFactory.cpp ConsoleFactory.hpp)
