//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__LINE_HPP_
#define OOP_LAB2__LINE_HPP_

#include <iostream>
#include <string>

class Line {
  public:
    Line() = default;

    explicit Line(std::string line);

    virtual ~Line() = default;

    [[nodiscard]] std::string& GetLine() const;

    virtual void Add(const std::string& line) = 0;

    virtual void Sub(const std::string& line) = 0;

    virtual void Add(const Line& line) = 0;

    virtual void Sub(const Line& line) = 0;

    virtual void Add(const Line* line) = 0;

    virtual void Sub(const Line* line) = 0;

    friend std::ostream& operator<<(std::ostream& out, const Line& line);

    friend std::ostream& operator<<(std::ostream& out, const Line* line);

  protected:
    void SetLine(std::string line);

  private:
    std::string line_;
};

#endif //OOP_LAB2__LINE_HPP_
