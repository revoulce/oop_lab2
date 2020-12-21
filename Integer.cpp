//
// Created by letih on 12/21/2020.
//

#include "Integer.hpp"

Integer::Integer() : Line() {}

Integer::Integer(std::string value) : Line(std::move(value)) {}

void Integer::Add(const std::string& line) {
    int other_value = std::stoi(line);
    int this_value = std::stoi(Line::GetLine());

    this_value += other_value;

    Line::SetLine(std::to_string(this_value));
}

void Integer::Sub(const std::string& line) {
    int other_value = std::stoi(line);
    int value = std::stoi(Line::GetLine());

    value -= other_value;

    Line::SetLine(std::to_string(value));
}

void Integer::Add(const Line& line) {
    int other_value = std::stoi(line.GetLine());
    int this_value = std::stoi(Line::GetLine());

    this_value += other_value;

    Line::SetLine(std::to_string(this_value));
}

void Integer::Sub(const Line& line) {
    int other_value = std::stoi(line.GetLine());
    int this_value = std::stoi(Line::GetLine());

    this_value -= other_value;

    Line::SetLine(std::to_string(this_value));
}

void Integer::Add(const Line* line) {
    int other_value = std::stoi(line->GetLine());
    int this_value = std::stoi(Line::GetLine());

    this_value += other_value;

    Line::SetLine(std::to_string(this_value));
}

void Integer::Sub(const Line* line) {
    int other_value = std::stoi(line->GetLine());
    int this_value = std::stoi(Line::GetLine());

    this_value -= other_value;

    Line::SetLine(std::to_string(this_value));
}
