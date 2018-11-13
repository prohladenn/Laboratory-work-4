//
// Created by Valery Kovshov on 13.11.2018.
//

#include "point.h"
#include "circle.h"

namespace shapes {

    circle::circle(float r)
            : shape("circle"), r(r) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    circle::circle(const point &center, const point &pointOnCircle)
            : shape("circle"), r(point::getDistance(center, pointOnCircle)) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }


    float circle::perimeter() const {
        return (2 * pi * r);;
    }

    float circle::area() const {
        return (r * r * pi);
    }
}