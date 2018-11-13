//
// Created by HP-PC on 13.11.2018.
//

#include "point.h"
#include <cmath>

namespace shapes {

    point::point(int x, int y) : shape("point"), x(x), y(y) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    float point::getDistance(point a, point b) {
        return sqrtf((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    }

    float point::perimeter() const {
        return 0;
    }

    float point::area() const {
        return 0;
    }

}