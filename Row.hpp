//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__ROW_HPP_
#define OOP_LAB2__ROW_HPP_

#include <algorithm>
#include "Line.hpp"

class Row : public Line {
  public:
    Row();

    explicit Row(std::string row);

    void Add(const std::string& line) override;

    void Sub(const std::string& line) override;

    void Add(const Line& line) override;

    void Sub(const Line& line) override;

    void Add(const Line* line) override;

    void Sub(const Line* line) override;
};

#endif //OOP_LAB2__ROW_HPP_
