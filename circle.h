#pragma once

#include "shape.h"
#include "point.h"

namespace shapes {
    /*
     * Обобщённое представление об окружности.
     */
    class circle : public shape {

        int r; // радиус окужности
        point center; // точка центра окружности
        const float pi = 3.14159265f; // число Пи

    public:

        /*
         * Основной констуктор класса.
         */
        circle(int r, const point &center);

        /*
         * Возвращает периметр фигуры.
         */
        float perimeter() const override;

        /*
         * Возвращает прощад фигуры.
         */
        float area() const override;
    };
}