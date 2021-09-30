#include "rectangle.h"

Rectangle::Rectangle(const double x, const double y, const double side_a, const double side_b, 
    const char* shapeName) : Square(x, y, side_a, shapeName)
{
    this->side_b = side_b;
}

Rectangle& Rectangle::operator=(const Rectangle& s) {
    if(this != &s) {
        Shape::operator=(s);
        side_b = s.get_side_b();
    }
    return *this;
}

Rectangle::Rectangle(const Rectangle& s) : Square(s) {
    side_b = s.get_side_b();
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl;
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl; 
}