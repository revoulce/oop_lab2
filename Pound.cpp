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

std::ostream& operator<<(std::ostream& out, const Pound& pound) {
    out << "£" << pound.value_;
    return out;
}
