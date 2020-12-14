//
// Created by letih on 12/12/2020.
//

#include "Console.hpp"

Console::Console() : purse_(new Purse()) {}

Console::~Console() {
    delete purse_;
}

void Console::Run() {
    std::string str_user_answer;
    int user_answer;

    while (true) {
        std::cout << std::setprecision(2) << std::fixed << *purse_ << std::endl;
        ShowMenu();

        std::cout << "Enter your choice: ";
        std::getline(std::cin, str_user_answer);

        try {
            user_answer = std::stoi(str_user_answer);
        } catch (std::out_of_range& e) {
            std::cerr << "Number is too large." << std::endl;
            std::cerr << "Error: " << e.what() << std::endl;
            continue;
        } catch (std::invalid_argument& e) {
            std::cerr << "Number is invalid." << std::endl;
            std::cerr << "Error: " << e.what() << std::endl;
            continue;
        }

        switch (user_answer) {
            case 0:
                return;
            case 1:
                AddMoney();
                break;
            case 2:
                SubMoney();
                break;
            default:
                std::cerr << "Number is invalid" << std::endl;
        }
    }
}

void Console::ShowMenu() {
    std::cout << "Menu:" << std::endl;
    std::cout << "0. Exit." << std::endl;
    std::cout << "1. Add some money to purse." << std::endl;
    std::cout << "2. Subtract some money from purse." << std::endl;
}

void Console::AddMoney() {
    std::string str_value;

    std::cout << "Enter value to add: ";
    std::getline(std::cin, str_value);

    int type = GetType(str_value);

    float value = EnterValue(str_value);

    purse_->AddMoney(value, type);
}

void Console::SubMoney() {
    std::string str_value;

    std::cout << "Enter value to subtract: ";
    std::getline(std::cin, str_value);

    int type = GetType(str_value);

    float value = EnterValue(str_value);

    if (!purse_->SubMoney(value, type)) {
        std::cerr << "Here you can't take on debt." << std::endl;
    }
}

float Console::EnterValue(std::string str_value) {
    float value;

    for (auto i : "$€£") {
        str_value.erase(std::remove(str_value.begin(), str_value.end(), i), str_value.end());
    }

    try {
        value = std::stof(str_value);
    } catch (std::out_of_range& e) {
        std::cerr << "Value is too large." << std::endl;
        std::cerr << "Error: " << e.what() << std::endl;
        return 0;
    } catch (std::invalid_argument& e) {
        std::cerr << "Value is invalid." << std::endl;
        std::cerr << "Error: " << e.what() << std::endl;
        return 0;
    }

    return value;
}

int Console::GetType(const std::string& str_value) {
    if (str_value.starts_with("$")) {
        return 1;
    } else if (str_value.starts_with("€")) {
        return 2;
    } else if (str_value.starts_with("£")) {
        return 3;
    } else {
        return 0;
    }
}
