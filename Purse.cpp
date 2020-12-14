//
// Created by letih on 12/13/2020.
//

#include "Purse.hpp"

Purse::Purse() : dollars_(new Dollar(0.0)), euro_(new Euro(0.0)), pounds_(new Pound(0.0)) {}

Purse::~Purse() {
    delete dollars_;
    delete euro_;
    delete pounds_;
}

bool Purse::AddMoney(double value_to_add, int type) {
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

bool Purse::SubMoney(double value_to_sub, int type = 0) {
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
