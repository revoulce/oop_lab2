//
// Created by letih on 12/13/2020.
//

#include "Dollar.hpp"

Dollar::Dollar() : Currency(0.0f) {}

Dollar::Dollar(float value) : Currency(value) {}

float Dollar::GetValue() const {
    return value_;
}

void Dollar::AddMoney(float value_to_add) {
    value_ += value_to_add;
}

bool Dollar::SubMoney(float value_to_sub) {
    if (value_ >= value_to_sub) {
        value_ -= value_to_sub;
        return true;
    }

    return false;
}
