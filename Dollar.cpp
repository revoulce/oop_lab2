//
// Created by revoulce on 12/10/20.
//

#include "Dollar.hpp"

Dollar::Dollar(double total) : Currency(total) {}

Dollar operator+(Dollar left, const Dollar& right) {
    left += right;
    return left;
}

Dollar operator-(Dollar left, const Dollar& right) {
    left -= right;
    return left;
}

std::ostream& operator<<(std::ostream& out, const Dollar& dollar) {
    out << "$" << dollar.value_;
    return out;
}
