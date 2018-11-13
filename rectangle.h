#pragma once

#include "shape.h"
#include "point.h"

namespace shapes {
    /*
     * Обобщённое представление о прямоугольнике.
     */
    class rectangle : public shape {
        /*
         *  Прямоугольник состояит из четырёх точек
         */
        point a, b, c, d;

    public:

        /*
         * Основной констуктор класса.
         */
        rectangle(const point &a, const point &b, const point &c, const point &d);

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