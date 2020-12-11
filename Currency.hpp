//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2__CURRENCY_HPP_
#define OOP_LAB2__CURRENCY_HPP_

class Currency {
  public:
    explicit Currency(double total);

    Currency& operator+=(const Currency& other);

    friend Currency operator+(Currency left, const Currency& right);

    Currency& operator-=(const Currency& other);

    friend Currency operator-(Currency left, const Currency& right);

  protected:
    double value_;
};

#endif //OOP_LAB2__CURRENCY_HPP_
