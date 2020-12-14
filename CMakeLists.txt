#cmake_minimum_required(VERSION 3.17)
project(oop_lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop_lab2 main.cpp main.hpp Currency.cpp Currency.hpp Console.cpp Console.hpp Dollar.cpp Dollar.hpp Euro.cpp Euro.hpp Pound.cpp Pound.hpp Purse.cpp Purse.hpp CurrencyFactory.cpp CurrencyFactory.hpp)
