//
// Created by letih on 12/22/2020.
//

#pragma once
#ifndef OOP_LAB2__CONSOLEACTIONSFACTORY_HPP_
#define OOP_LAB2__CONSOLEACTIONSFACTORY_HPP_

#if defined(_WIN32) || defined(_WIN64)
#define WINDOWS_SUPPORT
#elif defined(linux) || defined(__linux) || defined(__linux__)
#define LINUX_SUPPORT
#endif

#if defined(WINDOWS_SUPPORT)

#include <Windows.h>

#elif defined(LINUX_SUPPORT)

#include <iostream>
#include <string>
#include <term.h>
#include <termios.h>
#include <unistd.h>

#endif //WINDOWS_SUPPORT || LINUX_SUPPORT

/**
 * @brief Возвращает указатель на функцию для очистки экрана или ожидания нажатия клавиши пользователем в зависимости от системы
 */
class ConsoleActionsFactory {
  public:
    /**
     * @brief Получение функции очистки консоли
     * @return Указатель на функцию для очистки консоли в зависимости от системы
     */
    static auto GetClearConsole() -> void (*)();

    /**
     * @brief Получение функции ожидания нажатия пользователем любой клавиши
     * @return Указатель на функцию для ожидания нажатия в зависимости от системы
     */
    static auto GetWaitForAnyKey() -> void (*)();
};

#endif //OOP_LAB2__CONSOLEACTIONSFACTORY_HPP_
