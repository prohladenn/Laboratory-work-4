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
        float myPerimeter = 0;
        float myArea = 0;

    public:

        /*
         * Основной констуктор класса.
         */
        shape(std::string name) : name(name) {}

        /*
         * Возвращает периметр фигуры.
         */
        virtual float perimeter() const { return myPerimeter; }

        /*
         * Возвращает прощад фигуры.
         */
        virtual float area() const { return myArea; }

        /*
        * Возвращает имя фигуры.
        */
        const std::string &getName() const { return name; }

    protected:
        /*
        * Изменение значения периметра.
        */
        void setMyPerimeter(float myPerimeter) {
            shape::myPerimeter = myPerimeter;
        }

        /*
        * Изменение значения площади.
        */
        void setMyArea(float myArea) {
            shape::myArea = myArea;
        }

    };
}