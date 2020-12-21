//
// Created by letih on 12/21/2020.
//

#include "LineFactory.hpp"

Line* LineFactory::Create(const std::string& line, int type) {
    bool is_automatic = false;

    if (type == 0) {
        is_automatic = true;
    }

    if (is_automatic) {
        bool is_numeric = true;

        for (auto ch : line) {
            if (!std::isdigit(ch)) {
                is_numeric = false;
                break;
            }
        }

        if (is_numeric) {
            return new Integer(line);
        }

        return new Row(line);
    }

    switch (type) {
        case 1:
            return new Integer(line);
        case 2:
            return new Row(line);
        default:
            return nullptr;
    }
}
