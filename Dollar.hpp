//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2_TEST__DOLLAR_HPP_
#define OOP_LAB2_TEST__DOLLAR_HPP_
#include "Currency.hpp"
#include "Euro.hpp"
#include "Pound.hpp"

class Dollar : public Currency {
  public:
    explicit Dollar(double total);

    friend Dollar operator+(Dollar left, const Dollar& right);

    friend Dollar operator-(Dollar left, const Dollar& right);
};

#endif //OOP_LAB2_TEST__DOLLAR_HPP_
