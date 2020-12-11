//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2__POUND_HPP_
#define OOP_LAB2__POUND_HPP_
#include <iostream>
#include "Currency.hpp"

class Pound : public Currency {
  public:
    explicit Pound(double total);

    friend Pound operator+(Pound left, const Pound& right);

    friend Pound operator-(Pound left, const Pound& right);

    friend std::ostream& operator<<(std::ostream& out, const Pound& pound);
};

#endif //OOP_LAB2__POUND_HPP_
