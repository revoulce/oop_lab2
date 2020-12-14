//
// Created by letih on 12/13/2020.
//

#include "Euro.hpp"

Euro::Euro() : Currency(0.0f) {}

float Euro::GetValue() const {
    return value_;
}

Euro::Euro(float value) : Currency(value) {}

void Euro::AddMoney(float value_to_add) {
    value_ += value_to_add;
}

bool Euro::SubMoney(float value_to_sub) {
    if (value_ >= value_to_sub) {
        value_ -= value_to_sub;
        return true;
    }

    return false;
}
