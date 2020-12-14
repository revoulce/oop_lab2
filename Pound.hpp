//
// Created by letih on 12/13/2020.
//

#pragma once
#ifndef OOP_LAB2__POUND_HPP_
#define OOP_LAB2__POUND_HPP_
#include "Currency.hpp"

class Pound : public Currency {
  public:
    Pound();

    explicit Pound(double value);

    void AddMoney(double value_to_add) override;

    bool SubMoney(double value_to_sub) override;
};

#endif //OOP_LAB2__POUND_HPP_
