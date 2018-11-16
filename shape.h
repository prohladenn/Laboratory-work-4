#pragma once

#include <string>

namespace shapes {
    /*
     * Обобщённое представление о фигуре.
     */
    class shape {
        /*
         * Название фигуры
         * Всякая фигура должна иметь название.
         */
        std::string name;

    public:

        /*
         * Основной констуктор класса.
         */
        shape(std::string name) : name(name) {}

        /*
         * Возвращает периметр фигуры.
         */
        virtual float perimeter() const = 0;

        /*
         * Возвращает прощад фигуры.
         */
        virtual float area() const = 0;

        /*
        * Возвращает имя фигуры.
        */
        const std::string &getName() const { return name; }
    };
}