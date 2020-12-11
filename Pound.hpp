//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2_TEST__POUND_HPP_
#define OOP_LAB2_TEST__POUND_HPP_
#include "Currency.hpp"
#include "Dollar.hpp"
#include "Euro.hpp"

class Pound : public Currency {
  public:
    explicit Pound(double total);

    friend Pound operator+(Pound left, const Pound& right);

    friend Pound operator-(Pound left, const Pound& right);
};

#endif //OOP_LAB2_TEST__POUND_HPP_
