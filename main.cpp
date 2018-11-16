#include "shape.h"
#include "point.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <iostream>

using namespace shapes;

/*
 * Функция поиска фигуры максимальной площади
 */
shape *maxArea(shape *data[], int size);

int main() {

    point a = point(1, 1); // Просто точка
    triangle b = triangle(point(1, 1), point(2, 1), point(1, 2)); // Треугольник по трём точкам
    triangle c = triangle(3, 4, 5); // Треугольник по трём сторонам
    rectangle d = rectangle(2, 3); // Прямоугольник по ширине и высоте
    rectangle e = rectangle(point(1, 1), point(5, 5)); // Прямоугольник по левой нижней и правой верхней точке
    circle f = circle(1); // Круг по радиусу
    circle g = circle(point(1, 1), point(2, 3)); // Круг по центру и точке на окружности

    shape *figures[] = {&a, &b, &c, &d, &e, &f, &g};
    int n = 7;

    for (int i = 0; i < n; ++i) {
        std::cout << figures[i]->getName()
                  << ", perimeter = " << figures[i]->perimeter()
                  << ", area = " << figures[i]->area() << "\n";
    }

    shape *maxAreaFigure = maxArea(figures, n);
    std::cout << "Champion : " << maxAreaFigure->getName() << " "
              << "his area is " << maxAreaFigure->area() << "\n";

}

shape *maxArea(shape *data[], int size) {
    float max = 0;
    int indexMax = -1;
    for (int i = 0; i < size; ++i) {
        if (data[i]->area() > max) {
            max = data[i]->area();
            indexMax = i;
        }
    }
    return data[indexMax];
}

