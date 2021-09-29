// TODO: Documentation!
// TODO: get and set as needed
#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include <iostream>
using namespace std;

class Square : public Shape {
    protected:
        double side_a;
    public:
        Square(const double x, const double y, const double side_a, const char* shapeName);
        double get_side_a() const { return side_a; }
        void set_side_a(double side_a) { this->side_a = side_a; }

        virtual double area() const { return side_a * side_a; }
        virtual double perimeter() const { return 4 * side_a; }
        virtual void display() const;
};
#endif
