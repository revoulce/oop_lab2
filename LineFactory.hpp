//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__LINEFACTORY_HPP_
#define OOP_LAB2__LINEFACTORY_HPP_

#include "Integer.hpp"
#include "Line.hpp"
#include "Row.hpp"

class LineFactory {
  public:
    static Line* Create(const std::string& line, int type = 0);
};

#endif //OOP_LAB2__LINEFACTORY_HPP_
