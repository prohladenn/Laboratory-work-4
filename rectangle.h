#pragma once

#include "shape.h"
#include "point.h"

namespace shapes {
    /*
     * Обобщённое представление о прямоугольнике.
     */
    class rectangle : public shape {
        /*
         *  Прямоугольник имеет ширину и высоту
         */
        float width, height;

    public:

        /*
         * Конструктор класса по ширине и высоте
         */
        rectangle(float width, float height);

        /*
         * Констуктор класса по левой нижней и правой верхней точке
         */
        rectangle(const point &a, const point &b);

        /*
         * Возвращает периметр фигуры.
         */
        float perimeter() const override;

        /*
         * Возвращает площадь фигуры.
         */
        float area() const override;
    };

}