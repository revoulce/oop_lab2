//
// Created by revoulce on 12/10/20.
//

#include "Currency.hpp"

Currency::Currency(double total) : total_(total) {}

Currency& Currency::operator+=(const Currency& other) {
    this->total_ = this->total_ + other.total_;
    return *this;
}

Currency operator+(Currency left, const Currency& right) {
    left += right;
    return left;
}

Currency& Currency::operator-=(const Currency& other) {
    this->total_ = this->total_ - other.total_;
    return *this;
}

Currency operator-(Currency left, const Currency& right) {
    return Currency(left.total_ + right.total_);
}
