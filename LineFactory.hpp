//
// Created by letih on 12/21/2020.
//

#pragma once
#ifndef OOP_LAB2__LINEFACTORY_HPP_
#define OOP_LAB2__LINEFACTORY_HPP_

#include "Integer.hpp"
#include "Line.hpp"
#include "Row.hpp"

/**
 * @brief Класс для создания строки или числа
 */
class LineFactory {
  public:
    /**
     * @brief Создаёт строку или число
     * @param line Строка для анализа или создания
     * @param type Какой объект создавать, если не указано, то объект создаётся на основе анализа строки line
     * @return Указатель на созданный объект
     */
    static Line* Create(const std::string& line, int type = 0);
};

#endif //OOP_LAB2__LINEFACTORY_HPP_
