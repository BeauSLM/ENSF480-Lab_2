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
        Square& operator=(const Square& s); //assignment operator
        Square(const Square& s); //copy constructor
        virtual ~Square() {;} //destructor - doesn't do anything but is needed 
                              //to prevent unpredictable behavior
        //getters/setters
        double get_side_a() const { return side_a; } 
        void set_side_a(double side_a) { this->side_a = side_a; }

        virtual double area() const { return side_a * side_a; } //returns area of square
        virtual double perimeter() const { return 4 * side_a; } //returns perimeter of square
        virtual void display() const; //prints the square's name, x/y coords, side length, area and perimeter
};
#endif
