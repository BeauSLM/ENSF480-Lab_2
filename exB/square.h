// TODO: Documentation!
// TODO: get and set as needed
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
class Square : Shape {
    protected:
        double side_a;
    public:
        Square(double x, double y, double side_a ,char* shapeName);
        double getSideA() const { return side_a; }

        virtual double area() const { return side_a * side_a; }
        virtual double perimeter() const { return side_a * 4; }
        virtual void display() const;
};
#endif
