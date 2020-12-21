//
// Created by letih on 12/21/2020.
//

#include "Console.hpp"

void Console::Run() {
    std::string str_user_answer;
    int user_answer;

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
#if defined(WINDOWS_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#elif defined(LINUX_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#endif
                break;
            case 2:
                LineActions(1, 2);
#if defined(WINDOWS_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#elif defined(LINUX_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#endif

                break;
            case 3:
                LineActions(2, 1);
#if defined(WINDOWS_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#elif defined(LINUX_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#endif
                break;
            case 4:
                LineActions(2, 2);
#if defined(WINDOWS_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#elif defined(LINUX_SUPPORT)
                WaitForAnyKey();
                ClearConsole();
#endif
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
            }

            std::cout << "Result is " << first_line << std::endl;

            return;
        }

        std::cerr << "Error adding two lines" << std::endl;
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

#if defined(WINDOWS_SUPPORT)

void Console::ClearConsole() {
    CONSOLE_SCREEN_BUFFER_INFO console_screen_buffer_info;
    DWORD count;
    COORD home_coords = {0, 0};
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    if (handle == INVALID_HANDLE_VALUE) {
        return;
    }

    if (GetConsoleScreenBufferInfo(handle, &console_screen_buffer_info) == 0) {
        return;
    }

    DWORD cell_count = console_screen_buffer_info.dwSize.X * console_screen_buffer_info.dwSize.Y;

    if (FillConsoleOutputCharacter(handle, static_cast<TCHAR>(' '), cell_count, home_coords, &count) == 0) {
        return;
    }

    if (FillConsoleOutputAttribute(handle, console_screen_buffer_info.wAttributes, cell_count, home_coords, &count)
        == 0) {
        return;
    }

    SetConsoleCursorPosition(handle, home_coords);
}

void Console::WaitForAnyKey(const TCHAR* prompt) {
    TCHAR tchar;
    DWORD mode;
    DWORD count;
    HANDLE handle = GetStdHandle(STD_INPUT_HANDLE);

    if (prompt == nullptr) {
        prompt = TEXT("Press any key...\n");
    }

    WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), prompt, lstrlen(prompt), &count, nullptr);

    GetConsoleMode(handle, &mode);
    SetConsoleMode(handle, 0);

    WaitForSingleObject(handle, INFINITE);

    ReadConsole(handle, &tchar, 1, &count, nullptr);

    SetConsoleMode(handle, mode);
}

#elif defined(LINUX_SUPPORT)

void Console::ClearConsole() {
    if (!cur_term) {
        int success;

        setupterm(nullptr, STDOUT_FILENO, &success);

        if (success <= 0) {
            return;
        }
    }

    putp(tigetstr("clear"));
}

void Console::Raw(bool b) {
    struct termios settings;
    static struct termios initial_settings;
    static bool is_unitialized = false;

    if (!is_unitialized) {
        is_unitialized = tcgetattr(STDIN_FILENO, &initial_settings) == 0;

        if (!is_unitialized) {
            return;
        }
    }

    if (b) {
        tcgetattr(STDIN_FILENO, &settings);

        settings.c_cc[VTIME] = 0;
        settings.c_cc[VMIN] = 1;
        settings.c_iflag &= ~(BRKINT | ICRNL | INLCR | ISTRIP | IXOFF);
        settings.c_iflag |= IGNBRK;
        settings.c_oflag &= ~(OPOST);
        settings.c_cflag &= ~(CSIZE | PARENB);
        settings.c_cflag |= CS8;
        settings.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
    } else {
        settings = initial_settings;
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &settings);
}

int Console::WaitForAnyKey(const std::string& prompt) {
    struct termios settings;

    tcgetattr(STDIN_FILENO, &settings);

    Raw(true);

    std::cout << prompt << std::endl;
    int result = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &settings);
    return result;
}

#endif
