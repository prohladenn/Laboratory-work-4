//
// Created by Valery Kovshov on 13.11.2018.
//

#include "point.h"
#include "triangle.h"
#include "shape.h"
#include <cmath>

namespace shapes {

    triangle::triangle(const point &a, const point &b, const point &c)
            : shape("triangle"),
              a(point::getDistance(a, b)),
              b(point::getDistance(b, c)),
              c(point::getDistance(c, a)) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    triangle::triangle(float a, float b, float c)
            : shape("triangle"), a(a), b(b), c(c) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    float triangle::perimeter() const {
        return a + b + c;
    }

    float triangle::area() const {
        float pp = (a + b + c) / 2;
        return sqrtf(pp * (pp - a) * (pp - b) * (pp - a));
    }

}