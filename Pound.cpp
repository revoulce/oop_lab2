//
// Created by revoulce on 12/10/20.
//

#include "Pound.hpp"

Pound::Pound(double total) : Currency(total) {}

Pound operator+(Pound left, const Pound& right) {
    left += right;
    return left;
}

Pound operator-(Pound left, const Pound& right) {
    left -= right;
    return left;
}
