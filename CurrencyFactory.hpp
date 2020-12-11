//
// Created by revoulce on 12/10/20.
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
    static Currency* Create(const std::string& value);
};

#endif //OOP_LAB2__CURRENCYFACTORY_HPP_
