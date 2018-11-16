#pragma once

#include "shape.h"
#include "point.h"

namespace shapes {
    /*
     * Обобщённое представление об окружности.
     */
    class circle : public shape {

        float r; // радиус окужности
        const float pi = 3.14159265f; // число Пи

    public:

        /*
         * Конструктор класса по радиусу
         */
        circle(float r);

        /*
         * Конструктор класса по центру и точке на окружности
         */
        circle(const point &center, const point &pointOnCircle);

        /*
         * Переопределение функции расчёта периметра
         */
        float perimeter() const override;

        /*
         * Переопределение функции расчёта площади
         */
        float area() const override;

    };
}