//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2__DOLLAR_HPP_
#define OOP_LAB2__DOLLAR_HPP_
#include <iostream>
#include "Currency.hpp"

class Dollar : public Currency {
  public:
    explicit Dollar(double total);

    friend Dollar operator+(Dollar left, const Dollar& right);

    friend Dollar operator-(Dollar left, const Dollar& right);

    friend std::ostream& operator<<(std::ostream& out, const Dollar& dollar);
};

#endif //OOP_LAB2__DOLLAR_HPP_
