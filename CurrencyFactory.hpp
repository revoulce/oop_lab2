//
// Created by letih on 12/13/2020.
//

#pragma once
#ifndef OOP_LAB2__CURRENCYFACTORY_HPP_
#define OOP_LAB2__CURRENCYFACTORY_HPP_
#include <string>
#include "Currency.hpp"
#include "Dollar.hpp"
#include "Euro.hpp"
#include "Pound.hpp"

class CurrencyFactory {
  public:
    static Currency* Create(const std::string& str_value);
};

#endif //OOP_LAB2__CURRENCYFACTORY_HPP_
