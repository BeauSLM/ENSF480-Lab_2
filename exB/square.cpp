#include "square.h"

Square::Square(const double x, const double y, const double side_a, const char* shapeName)
    : Shape(Point(x,y), shapeName)
{
    this->side_a = side_a;
}