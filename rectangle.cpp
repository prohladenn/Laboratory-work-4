//
// Created by HP-PC on 13.11.2018.
//

#include "point.h"
#include "shape.h"
#include "rectangle.h"


namespace shapes {

    rectangle::rectangle(const point &a, const point &b, const point &c,
                         const point &d) : shape("rectangle"), a(a), b(b), c(c), d(d) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    float rectangle::perimeter() const {
        return (point::getDistance(a, b) + point::getDistance(b, c)) * 2;
    }

    float rectangle::area() const {
        return point::getDistance(a, b) * point::getDistance(b, c);
    }

}
