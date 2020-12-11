//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2_TEST__EURO_HPP_
#define OOP_LAB2_TEST__EURO_HPP_
#include "Currency.hpp"
#include "Dollar.hpp"
#include "Pound.hpp"

class Euro : public Currency {
  public:
    explicit Euro(double total);

    friend Euro operator+(Euro left, const Euro& right);

    friend Euro operator-(Euro left, const Euro& right);
};

#endif //OOP_LAB2_TEST__EURO_HPP_
