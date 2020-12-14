//
// Created by letih on 12/12/2020.
//

#include "Console.hpp"

Console::Console() : purse_(new Purse()) {}

Console::~Console() {
    delete purse_;
}

void Console::Run() {
    ShowMenu();
}

void Console::ShowMenu() {
    std::cout << "Menu:" << std::endl;
    std::cout << "0. Exit." << std::endl;
    std::cout << "1. Add some money to purse." << std::endl;
    std::cout << "2. Subtract some money from purse." << std::endl;
    std::cout << "3. " << std::endl;
    std::cout << "4. " << std::endl;
    std::cout << "5. " << std::endl;
    std::cout << "6. " << std::endl;
    std::cout << "7. " << std::endl;
    std::cout << "8. " << std::endl;
    std::cout << "9. " << std::endl;
    std::cout << "10. " << std::endl;
}

void Console::AddMoney(int type) {
    std::string str_value;
    double value;
    std::cout << "Enter value to add: ";
    std::getline(std::cin, str_value);
    try {
        value = std::stod(str_value);
    } catch (std::out_of_range& e) {
        std::cerr << ""
    }
    purse_->AddMoney(value, type);
}
