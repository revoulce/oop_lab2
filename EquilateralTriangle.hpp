//
// Created by letih on 12/10/2020.
//

#pragma once
#ifndef OOP_LAB2__EQUILATERALTRIANGLE_HPP_
#define OOP_LAB2__EQUILATERALTRIANGLE_HPP_
#include <cmath>
#include "Triangle.hpp"

/**
 * @brief Равносторонний треугольник
 */
class EquilateralTriangle : public Triangle {
  public:
    double GetArea() override;

    double GetPerimeter() override;
};

#endif //OOP_LAB2__EQUILATERALTRIANGLE_HPP_
