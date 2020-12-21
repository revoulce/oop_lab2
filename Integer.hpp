//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__INTEGER_HPP_
#define OOP_LAB2__INTEGER_HPP_

#include "Line.hpp"

class Integer : public Line {
  public:
    Integer();

    explicit Integer(std::string value);

    void Add(const std::string& line) override;

    void Sub(const std::string& line) override;

    void Add(const Line& line) override;

    void Sub(const Line& line) override;

    void Add(const Line* line) override;

    void Sub(const Line* line) override;
};

#endif //OOP_LAB2__INTEGER_HPP_
