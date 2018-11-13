#include "shape.h"
#include "point.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <iostream>

using namespace shapes;


int main() {

    shape figures[] = {
            point(1, 1),
            triangle(point(1, 1), point(2, 1), point(1, 2)),
            rectangle(point(1, 1), point(2, 1), point(2, 2), point(1, 2)),
            circle(1, point(1, 1))
    };

    for (int i = 0; i < 4; ++i) {
        std::cout << figures[i].getName()
                  << ", perimeter = " << figures[i].perimeter()
                  << ", area = " << figures[i].area() << "\n";
    }

}