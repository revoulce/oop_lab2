//
// Created by letih on 12/10/2020.
//


#include "IsoscelesTriangle.hpp"

double IsoscelesTriangle::GetArea() {
    return 0;
}

double IsoscelesTriangle::GetPerimeter() {
    return 2.0 * pow(first_side_, 2.0) - 2.0 * pow(second_side_, 2.0) * cos(angle_);
}
