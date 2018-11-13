#pragma once

#include "shape.h"
#include "point.h"

namespace shapes {
    /*
     * Обобщённое предстваление о теругольнике.
     */
    class triangle : public shape {
        /*
         *  Треугольник состояит из трёх точек
         */
        point a, b, c;

    public:

        /*
         * Основной констуктор класса.
         */
        triangle(const point &a, const point &b, const point &c);

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