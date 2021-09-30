#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include <iostream>
using namespace std;

//child class of Shape, represents a Square
//has one side defined (squares have all sides equal)
class Square : public Shape {
    protected:
        double side_a;
    public:
        //constructor + big 3
        Square(const double x, const double y, const double side_a, const char* shapeName);
        // REQUIRES: shapeName points to the first character of a c-string
        // PROMISES: initializes members of square to the passed in values

        Square& operator=(const Square& s); //assignment operator
        // REQUIRES: s is a reference to a square object
        // PROMISES: make this object a copy of s, freeing memory as necessary

        Square(const Square& s); //copy constructor
        // REQUIRES: s is a reference to a square object
        // PROMISES: construct a copy of s, allocating memory as necessary

        // TODO: sanity check do we need this to be virtual in subclasses
        virtual ~Square() {;} //destructor - doesn't do anything but is needed 
                              //to prevent unpredictable behavior
        //getters/setters
        double get_side_a() const { return side_a; } 
        // PROMISES: returns side_a
        
        void set_side_a(double side_a) { this->side_a = side_a; }
        // PROMISES: sets side_a to passed in value

        virtual double area() const { return side_a * side_a; }
        // PROMISES: returns the area of the square

        virtual double perimeter() const { return 4 * side_a; }
        // PROMISES: returns the perimeter of the square

        virtual void display() const;
        // PROMISES: prints the square's name, x/y coords, side length, area and perimeter
};
#endif
