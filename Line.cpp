//
// Created by letih on 12/21/2020.
//

#include "Line.hpp"

#include <utility>

Line::Line(std::string line) : line_(std::move(line)) {}

const std::string& Line::GetLine() const {
    return line_;
}

void Line::SetLine(std::string line) {
    line_ = std::move(line);
}

std::ostream& operator<<(std::ostream& out, const Line& line) {
    out << line.line_;
    return out;
}

std::ostream& operator<<(std::ostream& out, const Line* line) {
    out << line->line_;
    return out;
}
