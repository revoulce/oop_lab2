//
// Created by revoulce on 12/10/20.
//

#include "CurrencyFactory.hpp"

Currency* CurrencyFactory::Create(const std::string& value) {
    int total = std::stoi(value.substr(1));

    if (value.starts_with("$")) {
        return new Dollar(total);
    } else if (value.starts_with("€")) {
        return new Euro(total);
    } else if (value.starts_with("£")) {
        return new Pound(total);
    }

    return nullptr;
}
