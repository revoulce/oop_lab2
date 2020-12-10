//
// Created by letih on 12/10/2020.
//

#pragma once
#ifndef OOP_LAB2__ISOSCELESTRIANGLE_HPP_
#define OOP_LAB2__ISOSCELESTRIANGLE_HPP_
#include <cmath>
#include "Triangle.hpp"

/**
 * @brief Равнобедренный треугольник
 */
class IsoscelesTriangle : public Triangle {
  public:
    double GetArea() override;

    double GetPerimeter() override;
};

#endif //OOP_LAB2__ISOSCELESTRIANGLE_HPP_
