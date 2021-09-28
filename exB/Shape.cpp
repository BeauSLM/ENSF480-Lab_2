#include <iomanip>
#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape(Point origin, char *shapeName):
    origin(origin), shapeName(new char[strlen(shapeName) + 1]) {
        strcpy(this->shapeName, shapeName);
}

void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    origin.display();
}

double Shape::distance(Shape& other) const {
    return Point::distance(this->origin, other.origin);
}

double Shape::distance(Shape& the_shape, Shape& other) {
    return Point::distance(the_shape.getOrigin(), other.getOrigin());
}

void Shape::move(double dx, double dy) {
    origin.x += dx;
    origin.y += dy;
}
