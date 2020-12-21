//
// Created by letih on 12/21/2020.
//

#include "Row.hpp"

Row::Row() : Line() {}

Row::Row(std::string row) : Line(std::move(row)) {}

void Row::Add(const std::string& line) {
    std::string row = Line::GetLine();

    row = row + line;

    Line::SetLine(row);
}

void Row::Sub(const std::string& line) {
    std::string row = Line::GetLine();

    for (auto ch : line) {
        row.erase(std::remove(row.begin(), row.end(), ch), row.end());
    }

    Line::SetLine(row);
}

void Row::Add(const Line& line) {
    std::string row = Line::GetLine();

    row = row + line.GetLine();

    Line::SetLine(row);
}

void Row::Sub(const Line& line) {
    std::string row = Line::GetLine();

    for (auto ch : line.GetLine()) {
        row.erase(std::remove(row.begin(), row.end(), ch), row.end());
    }

    Line::SetLine(row);
}

void Row::Add(const Line* line) {
    std::string row = Line::GetLine();

    row = row + line->GetLine();

    Line::SetLine(row);
}

void Row::Sub(const Line* line) {
    std::string row = Line::GetLine();

    for (auto ch : line->GetLine()) {
        row.erase(std::remove(row.begin(), row.end(), ch), row.end());
    }

    Line::SetLine(row);
}
