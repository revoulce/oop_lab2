//
// Created by revoulce on 12/10/20.
//

#pragma once
#ifndef OOP_LAB2__CURRENCY_HPP_
#define OOP_LAB2__CURRENCY_HPP_

class Currency {
  public:
    Currency();

    explicit Currency(float value);

    virtual void AddMoney(float value_to_add) = 0;

    virtual bool SubMoney(float value_to_sub) = 0;

  protected:
    float value_;
};

#endif //OOP_LAB2__CURRENCY_HPP_
