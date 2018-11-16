//
// Created by Valery Kovshov on 13.11.2018.
//

#include "point.h"
#include "circle.h"

namespace shapes {

    circle::circle(float r)
            : shape("circle"), r(r) {}

    circle::circle(const point &center, const point &pointOnCircle)
            : shape("circle"), r(point::getDistance(center, pointOnCircle)) {}

    float circle::perimeter() const {
        return (2 * pi * r);
    }

    float circle::area() const {
        return (r * r * pi);
    }
}