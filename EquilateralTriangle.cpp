//
// Created by letih on 12/10/2020.
//

#include "EquilateralTriangle.hpp"

double EquilateralTriangle::GetArea() {
    return (sqrt(3.0) / 4.0 * pow(first_side_, 2.0));
}

double EquilateralTriangle::GetPerimeter() {
    return first_side_ * 3.0;
}
