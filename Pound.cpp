//
// Created by letih on 12/13/2020.
//

#include "Pound.hpp"

Pound::Pound() : Currency(0.0f) {}

Pound::Pound(float value) : Currency(value) {}

float Pound::GetValue() const {
    return value_;
}

void Pound::AddMoney(float value_to_add) {
    value_ += value_to_add;
}

bool Pound::SubMoney(float value_to_sub) {
    if (value_ >= value_to_sub) {
        value_ -= value_to_sub;
        return true;
    }

    return false;
}
