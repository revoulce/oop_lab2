//
// Created by letih on 12/10/2020.
//

#pragma once
#ifndef OOP_LAB2__TRIANGLE_HPP_
#define OOP_LAB2__TRIANGLE_HPP_

/**
 * @brief Треугольник
 */
class Triangle {
  public:
    Triangle() = default;

    Triangle(double first_side, double second_side, double angle);

    virtual ~Triangle() = default;

    virtual double GetArea() = 0;

    virtual double GetPerimeter() = 0;

  protected:
    double first_side_ = 0;
    double second_side_ = 0;
    double angle_ = 0;
};

#endif //OOP_LAB2__TRIANGLE_HPP_
