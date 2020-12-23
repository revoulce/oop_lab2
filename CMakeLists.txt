#cmake_minimum_required(VERSION 3.17)
project(oop_lab2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -lcurses")

add_executable(oop_lab2 main.cpp main.hpp Line.cpp Line.hpp Integer.cpp Integer.hpp Row.cpp Row.hpp Console.cpp Console.hpp LineFactory.cpp LineFactory.hpp ConsoleActionsFactory.cpp ConsoleActionsFactory.hpp)
