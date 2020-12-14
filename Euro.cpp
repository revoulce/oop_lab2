//
// Created by letih on 12/13/2020.
//

#include "Euro.hpp"

Euro::Euro() : Currency(0.0) {}

Euro::Euro(double value) : Currency(value) {}

void Euro::AddMoney(double value_to_add) {
    value_ += value_to_add;
}

bool Euro::SubMoney(double value_to_sub) {
    if (value_ >= value_to_sub) {
        value_ -= value_to_sub;
        return true;
    }

    return false;
}
