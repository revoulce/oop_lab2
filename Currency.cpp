//
// Created by revoulce on 12/10/20.
//

#include "Currency.hpp"

Currency::Currency(double total) : value_(total) {}

Currency& Currency::operator+=(const Currency& other) {
    this->value_ = this->value_ + other.value_;
    return *this;
}

Currency operator+(Currency left, const Currency& right) {
    left += right;
    return left;
}

Currency& Currency::operator-=(const Currency& other) {
    this->value_ = this->value_ - other.value_;
    return *this;
}

Currency operator-(Currency left, const Currency& right) {
    return Currency(left.value_ + right.value_);
}
