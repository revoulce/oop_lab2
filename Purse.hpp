//
// Created by letih on 12/13/2020.
//

#pragma once
#ifndef OOP_LAB2__PURSE_HPP_
#define OOP_LAB2__PURSE_HPP_
#include <iostream>
#include <cmath>
#include "Dollar.hpp"
#include "Euro.hpp"
#include "Pound.hpp"

class Purse {
  public:
    Purse();

    ~Purse();

    bool AddMoney(float value_to_add, int type);

    bool SubMoney(float value_to_sub, int type);

    float Round(float value);

    friend std::ostream& operator<<(std::ostream& os, const Purse& purse);

  private:
    Dollar* dollars_;
    Euro* euro_;
    Pound* pounds_;
};

#endif //OOP_LAB2__PURSE_HPP_
