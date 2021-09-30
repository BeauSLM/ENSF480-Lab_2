#include "square.h"

Square::Square(const double x, const double y, const double side_a, const char* shapeName)
    : Shape(Point(x,y), shapeName)
{
    this->side_a = side_a;
}

Square& Square::operator=(const Square& s) {
    if(this != &s) {
        Shape::operator=(s);
        side_a = s.get_side_a();
    }
    return *this;
}

Square::Square(const Square& s) : Shape(s) {
    side_a = s.get_side_a();
}

void Square::display() const {
    cout << "Square Name: " << getName() << endl;
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl; 
}