/*
 * File Name: dictionaryList.cpp
 * Assignment: Lab 2 Exercise A
 * Completed By: Beau McCartney, Quentin Jennings
 * Submission Date: September 30th, 2021
 */

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
