//
// Created by letih on 12/13/2020.
//

#include "Purse.hpp"

Purse::Purse() : dollars_(new Dollar(0.0f)), euro_(new Euro(0.0f)), pounds_(new Pound(0.0f)) {}

Purse::~Purse() {
    delete dollars_;
    delete euro_;
    delete pounds_;
}

bool Purse::AddMoney(float value_to_add, int type) {
    value_to_add = Round(value_to_add);

    switch (type) {
        case 1:
            dollars_->AddMoney(value_to_add);
            return true;
        case 2:
            euro_->AddMoney(value_to_add);
            return true;
        case 3:
            pounds_->AddMoney(value_to_add);
            return true;
        default:
            return false;
    }
}

bool Purse::SubMoney(float value_to_sub, int type = 0) {
    value_to_sub = Round(value_to_sub);

    switch (type) {
        case 1:
            return dollars_->SubMoney(value_to_sub);
        case 2:
            return euro_->SubMoney(value_to_sub);
        case 3:
            return pounds_->SubMoney(value_to_sub);
        default:
            return false;
    }
}

std::ostream& operator<<(std::ostream& os, const Purse& purse) {
    os << "$" << purse.dollars_->GetValue() << " ";
    os << "€" << purse.euro_->GetValue() << " ";
    os << "£" << purse.pounds_->GetValue();
    return os;
}

float Purse::Round(float value) {
    float value2 = std::lround(value * 100 + 0.5);
    return (float) (value2 / 100);
}
