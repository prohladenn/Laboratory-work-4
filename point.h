#pragma once

#include "shape.h"

namespace shapes {
    /*
     * Обобщённое представление о точке.
     *
     * Описывает точку в дискретной системе координат.
     */
    class point : public shape {
        int x = 0, y = 0;

    public:

        /*
        * Основной констуктор класса.
        */
        point(int x, int y);

        /*
         * Нахождение расстояния между точками
         */
        static float getDistance(point a, point b);

        /*
         * Получение переменной X
         */
        int getX() const;

        /*
         * Получение переменной Y
         */
        int getY() const;

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