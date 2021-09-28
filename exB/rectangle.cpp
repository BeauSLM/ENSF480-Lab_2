#include "rectangle.h"

Rectangle::Rectangle(const double x, const double y, const double side_a, const double side_b, 
    const char* shapeName) : Square(x, y, side_a, shapeName)
{
    this->side_b = side_b;
}

double Rectangle::area() const {
    return side_a * side_b;
}

double Rectangle::perimeter() const {
    return 2 * (side_a + side_b);
}