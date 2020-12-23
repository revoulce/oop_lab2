//
// Created by letih on 12/21/2020.
//

#include "Console.hpp"

void Console::Run() {
    std::string str_user_answer;
    int user_answer;

    void (* ClearConsole)();
    void (* WaitForAnyKey)();

    ClearConsole = ConsoleActionsFactory::GetClearConsole();
    WaitForAnyKey = ConsoleActionsFactory::GetWaitForAnyKey();

    while (true) {
        ShowMenu();

        std::cout << "PLease entered your choice: ";
        std::getline(std::cin, str_user_answer);

        if (!std::isdigit(str_user_answer[0])) {
            std::cerr << "Invalid number" << std::endl;
            continue;
        }

        user_answer = str_user_answer[0] - '0';

        switch (user_answer) {
            case 0:
                return;
            case 1:
                LineActions(1, 1);
                WaitForAnyKey();
                ClearConsole();
                break;
            case 2:
                LineActions(1, 2);
                WaitForAnyKey();
                ClearConsole();
                break;
            case 3:
                LineActions(2, 1);
                WaitForAnyKey();
                ClearConsole();
                break;
            case 4:
                LineActions(2, 2);
                WaitForAnyKey();
                ClearConsole();
                break;
            default:
                std::cerr << "Wrong choice." << std::endl;
        }
    }
}

void Console::ShowMenu() {
    std::cout << "Menu:" << std::endl;
    std::cout << "0. Exit." << std::endl;
    std::cout << "1. Add two integers." << std::endl;
    std::cout << "2. Add two rows." << std::endl;
    std::cout << "3. Subtract two integers." << std::endl;
    std::cout << "4. Subtract two rows." << std::endl;
}

void Console::LineActions(int action, int type) {
    Line* first_line = Input(type, 1);
    Line* second_line = Input(type, 2);

    try {
        if (first_line != nullptr && second_line != nullptr) {
            switch (action) {
                case 1:
                    first_line->Add(second_line);
                    break;
                case 2:
                    first_line->Sub(second_line);
                    break;
                default:
                    std::cerr << "Wrong action with lines." << std::endl;
            }

            std::cout << "Result is " << first_line << std::endl;
        } else {
            std::cerr << "Error adding two lines" << std::endl;
        }
    } catch (std::out_of_range& e) {
        std::cerr << "Entered value is too big." << std::endl;
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (std::invalid_argument& e) {
        std::cerr << "Invalid value was given " << std::endl;
        std::cerr << "Error: " << e.what() << std::endl;
    }

    delete first_line;
    delete second_line;
}

Line* Console::Input(int type, int number) {
    std::string str_line;
    std::string line_type;

    switch (type) {
        case 1:
            line_type = "integer";
            break;
        case 2:
            line_type = "row";
            break;
        default:
            line_type = "line";
    }

    switch (number) {
        case 1:
            std::cout << "Enter first " << line_type << ": ";
            break;
        case 2:
            std::cout << "Enter second " << line_type << ": ";
            break;
        default:
            std::cerr << "Wrong number." << std::endl;
            return nullptr;
    }

    std::getline(std::cin, str_line);

    return LineFactory::Create(str_line, type);
}
