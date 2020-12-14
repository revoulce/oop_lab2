//
// Created by letih on 12/13/2020.
//

#include "Dollar.hpp"

Dollar::Dollar() : Currency(0.0) {}

Dollar::Dollar(double value) : Currency(value) {}

void Dollar::AddMoney(double value_to_add) {
    value_ += value_to_add;
}

bool Dollar::SubMoney(double value_to_sub) {
    if (value_ >= value_to_sub) {
        value_ -= value_to_sub;
        return true;
    }

    return false;
}
