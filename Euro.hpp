//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2__EURO_HPP_
#define OOP_LAB2__EURO_HPP_
#include <iostream>
#include "Currency.hpp"

class Euro : public Currency {
  public:
    explicit Euro(double total);

    friend Euro operator+(Euro left, const Euro& right);

    friend Euro operator-(Euro left, const Euro& right);

    friend std::ostream& operator<<(std::ostream& out, const Euro& euro);
};

#endif //OOP_LAB2__EURO_HPP_
