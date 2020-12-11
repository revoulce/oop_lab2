//
// Created by revoulce on 12/10/20.
//

#include "Euro.hpp"

Euro::Euro(double total) : Currency(total) {}

Euro operator+(Euro left, const Euro& right) {
    left += right;
    return left;
}

Euro operator-(Euro left, const Euro& right) {
    left -= right;
    return left;
}
