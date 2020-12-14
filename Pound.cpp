//
// Created by letih on 12/13/2020.
//

#include "Pound.hpp"

Pound::Pound() : Currency(0.0) {}

Pound::Pound(double value) : Currency(value) {}

void Pound::AddMoney(double value_to_add) {
    value_ += value_to_add;
}

bool Pound::SubMoney(double value_to_sub) {
    if (value_ >= value_to_sub) {
        value_ -= value_to_sub;
        return true;
    }

    return false;
}
