//
// Created by HP-PC on 13.11.2018.
//

#include "point.h"
#include "circle.h"

namespace shapes {

    circle::circle(int r, const point &center) : shape("circle"), r(r), center(center) {
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