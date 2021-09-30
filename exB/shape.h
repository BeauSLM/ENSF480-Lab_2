#ifndef SHAPE_H
#define SHAPE_H

#include <string.h>
#include "point.h"
using namespace std;

//represents a Shape and acts as the base class for Square/Rectangle
//has an origin point and a name and functions related to the shape
class Shape {
    protected:
        Point origin;
        char *shapeName; // dynamically allocated by the constructor

    public:
        //constructor + big 3
        Shape(const Point origin, const char *shapeName); //constructor
        virtual ~Shape() { delete [] shapeName; } //destructor that frees shapeName
        Shape& operator=(const Shape& s); //assignment operator
        Shape(const Shape& s); //copy constructor

        //getters
        const Point& getOrigin() const { return origin; } //point returned cannot be modified
        char* getName() const { return shapeName; }

        virtual void display() const; //displays the shape name and origin coordinates
        double distance(Shape& other) const; //calculates the distance between this shape and another
        static double distance(Shape& the_shape, Shape& other); //calculates the distance between any 2 shapes
        void move(double dx, double dy); //moves the shape's originchri
};
#endif
