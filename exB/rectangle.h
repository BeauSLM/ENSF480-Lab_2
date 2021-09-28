#ifndef RECT_H
#define RECT_H

#include "square.h"
#include <iostream>
using namespace std;

class Rectangle : Square {
    private:
        double side_b;

    public:
        Rectangle(const double x, const double y, const double side_a, const double side_b, const char* shapeName);
        double area() const;
        double perimeter() const;
        void display() const;

        double getSide_b() { return side_b; }
        void setSide_b(double side_b) { this->side_b = side_b; }
        
};

#endif