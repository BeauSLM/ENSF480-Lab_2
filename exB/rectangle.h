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
        // REQUIRES: shapeName points to the first character of a c-string
        // PROMISES: initializes rectangle with the passed in values

        // TODO: sanity check do we need this to be virtual in subclasses
        virtual ~Rectangle() {;}
        //virtual destructor is needed

        Rectangle& operator=(const Rectangle& s); //assignment operator
        // REQUIRES: s is a reference to a rectangle object
        // PROMISES: make this object a copy of s, freeing memory as necessary

        Rectangle(const Rectangle& s); //copy constructor
        // REQUIRES: s is a reference to a rectangle object
        // PROMISES: construct a copy of s, allocating memory as necessary

        double area() const { return side_a * side_b; }
        // PROMISES: returns area of rectangle

        double perimeter() const { return 2 * (side_a + side_b); }
        // PROMISES: returns perimeter of rectangle

        //getters/setters
        double get_side_b() const { return side_b; }
        // PROMISES: returns side b
        
        void set_side_b(double side_b) { this->side_b = side_b; }
        // PROMISES: sets side_b to the passed in value

        void display() const;
        // PROMISES: displays rectangle name, x/y coords, side a/b, area and perimeter
};

#endif
