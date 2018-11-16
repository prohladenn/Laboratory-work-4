#pragma once

#include "shape.h"
#include "point.h"

namespace shapes {
    /*
     * Обобщённое предстваление о теругольнике.
     */
    class triangle : public shape {
        /*
         *  Треугольник состояит из трёх сторон
         */
        float a, b, c;

    public:

        /*
         * Констуктор класса по трём точкам
         */
        triangle(const point &a, const point &b, const point &c);

        /*
         * Констуктор класса по трём сторонам
         */
        triangle(float a, float b, float c);

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