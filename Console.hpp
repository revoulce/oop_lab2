//
// Created by letih on 12/12/2020.
//

#pragma once
#ifndef OOP_LAB2__CONSOLE_HPP_
#define OOP_LAB2__CONSOLE_HPP_
#include <iostream>
#include <string>
#include "Purse.hpp"
#include "CurrencyFactory.hpp"

class Console {
  public:
    Console();

    ~Console();

    void Run();

  private:
    Purse* purse_;

    void ShowMenu();

    void AddMoney(int type);
};

#endif //OOP_LAB2__CONSOLE_HPP_
