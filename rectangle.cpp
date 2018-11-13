//
// Created by Valery Kovshov on 13.11.2018.
//

#include "point.h"
#include "shape.h"
#include "rectangle.h"


namespace shapes {

    rectangle::rectangle(float width, float height)
            : shape("rectangle"), width(width), height(height) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    rectangle::rectangle(const point &a, const point &b)
            : shape("rectangle"),
              width(abs(a.getX() - b.getX())),
              height(abs(a.getY() - b.getY())) {
        this->setMyPerimeter(perimeter());
        this->setMyArea(area());
    }

    float rectangle::perimeter() const {
        return (width + height) * 2;
    }

    float rectangle::area() const {
        return width * height;
    }


}
