//
// Created by letih on 12/13/2020.
//

#pragma once
#ifndef OOP_LAB2__EURO_HPP_
#define OOP_LAB2__EURO_HPP_
#include "Currency.hpp"

class Euro : public Currency {
  public:
    Euro();

    explicit Euro(double value);

    void AddMoney(double value_to_add) override;

    bool SubMoney(double value_to_sub) override;
};

#endif //OOP_LAB2__EURO_HPP_
