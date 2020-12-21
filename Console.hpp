//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__CONSOLE_HPP_
#define OOP_LAB2__CONSOLE_HPP_

#if defined(_WIN32) || defined(_WIN64)
#define WINDOWS_SUPPORT
#elif defined(linux) || defined(__linux) || defined(__linux__)
#define LINUX_SUPPORT
#endif

#if defined(WINDOWS_SUPPORT)

#include <Windows.h>

#elif defined(LINUX_SUPPORT)

#include <unistd.h>
#include <term.h>
#include <termios.h>

#endif

#include <iostream>
#include "Integer.hpp"
#include "LineFactory.hpp"
#include "Row.hpp"

class Console {
  public:
    void Run();

  private:
    void ShowMenu();

    Line* Input(int type, int number);

    void AddLines(int type = 0);

    void SubLines(int type = 0);

#if defined(WINDOWS_SUPPORT)

    void ClearConsole();

    void WaitForAnyKey(const TCHAR* prompt = nullptr);

#elif defined(LINUX_SUPPORT)

    void ClearConsole();

    void Raw();

    void WaitForAnyKey(const std::string& promt = std::string());

#endif
};

#endif //OOP_LAB2__CONSOLE_HPP_
