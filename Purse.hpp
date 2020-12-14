//
// Created by letih on 12/13/2020.
//

#pragma once
#ifndef OOP_LAB2__PURSE_HPP_
#define OOP_LAB2__PURSE_HPP_
#include "Dollar.hpp"
#include "Euro.hpp"
#include "Pound.hpp"

class Purse {
  public:
    Purse();

    ~Purse();

    bool AddMoney(double value_to_add, int type);

    bool SubMoney(double value_to_sub, int type);

  private:
    Dollar* dollars_;
    Euro* euro_;
    Pound* pounds_;
};

#endif //OOP_LAB2__PURSE_HPP_
