#ifndef RECT_H
#define RECT_H

#include "square.h"
#include <iostream>
using namespace std;

class Rectangle : public Square {
    private:
        double side_b;

    public:
        Rectangle(const double x, const double y, const double side_a, 
                const double side_b, const char* shapeName);
        virtual ~Rectangle() {;}
        Rectangle& operator=(const Rectangle& s);
        Rectangle(const Rectangle& s);

        double area() const { return side_a * side_b; }
        double perimeter() const { return 2 * (side_a + side_b); }

        double get_side_b() const { return side_b; }
        void set_side_b(double side_b) { this->side_b = side_b; }

        void display() const;
        
};

#endif