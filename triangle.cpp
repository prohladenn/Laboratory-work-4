//
// Created by HP-PC on 13.11.2018.
//

#include "point.h"
#include "triangle.h"
#include "shape.h"
#include <cmath>

namespace shapes {

    triangle::triangle(const point &a, const point &b,
            const point &c) : shape("triangle"), a(a), b(b), c(c) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    float triangle::perimeter() const {
        return point::getDistance(a, b) + point::getDistance(a, c) + point::getDistance(b, c);
    }

    float triangle::area() const {
        float ab = point::getDistance(a, b);
        float ac = point::getDistance(a, c);
        float bc = point::getDistance(b, c);
        float pp = (ab + bc + ac) / 2;
        return sqrtf(pp * (pp - ab) * (pp - bc) * (pp - ac));
    }

}