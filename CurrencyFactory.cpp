//
// Created by letih on 12/13/2020.
//

#include "CurrencyFactory.hpp"

Currency* CurrencyFactory::Create(const std::string& str_value) {
    double value = std::stod(str_value);

    if (str_value.starts_with("$")) {
        return new Dollar(value);
    } else if (str_value.starts_with("€")) {
        return new Euro(value);
    } else if (str_value.starts_with("£")) {
        return new Pound(value);
    }

    return nullptr;
}
