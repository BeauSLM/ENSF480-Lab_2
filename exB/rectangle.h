#ifndef RECT_H
#define RECT_H

#include "square.h"
#include <iostream>
using namespace std;

//child of Square and grandchild of Shape, represents a Rectangle
//side_b defines the length of the second side (side_a and side_b)
class Rectangle : public Square {
    private:
        double side_b;

    public:
        //constructor + big 3
        Rectangle(const double x, const double y, const double side_a, 
                const double side_b, const char* shapeName);
        virtual ~Rectangle() {;} //virtual destructor is needed
        Rectangle& operator=(const Rectangle& s); //assignment operator
        Rectangle(const Rectangle& s); //copy constructor

        double area() const { return side_a * side_b; } //returns area of rectangle
        double perimeter() const { return 2 * (side_a + side_b); } //returns perimeter of rectangle

        //getters/setters
        double get_side_b() const { return side_b; }
        void set_side_b(double side_b) { this->side_b = side_b; }

        void display() const; //displays rectangle name, x/y coords, side a/b, area and perimeter
        
};

#endif