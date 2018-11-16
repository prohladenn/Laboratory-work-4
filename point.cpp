//
// Created by Valery Kovshov on 13.11.2018.
//

#include "point.h"
#include <cmath>

namespace shapes {

    point::point(int x, int y)
            : shape("point"), x(x), y(y) {}

    float point::getDistance(point a, point b) {
        return sqrtf((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    }

    int point::getX() const {
        return x;
    }

    int point::getY() const {
        return y;
    }

    float point::perimeter() const {
        return 0;
    }

    float point::area() const {
        return 0;
    }

}