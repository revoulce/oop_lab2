//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__CONSOLE_HPP_
#define OOP_LAB2__CONSOLE_HPP_

#include <iostream>
#include "ConsoleFactory.hpp"
#include "Integer.hpp"
#include "LineFactory.hpp"
#include "Row.hpp"

class Console {
  public:
    void Run();

  private:
    void ShowMenu();

    Line* Input(int type, int number);

    void LineActions(int action, int type = 0);
};

#endif //OOP_LAB2__CONSOLE_HPP_
