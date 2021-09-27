// TODO: Documentation!
#ifndef SHAPE_H
#define SHAPE_H
#include_next <string.h>
#include "Point.h"
class Shape {
    protected:
        Point origin;
        char *shapeName; // dynamically allocated by the constructor
    public:
        Shape(Point origin, char *shapeName);
        ~Shape() { delete [] shapeName; }

        const Point& getOrigin() const { return origin; }
        char *getName() const { return shapeName; }

        virtual void display() const; // virtual? if so, provide definition for this class (see slide 25)
        double distance(Shape& other) const;
        static double distance(Shape& the_shape, Shape& other);
        void move(double dx, double dy);
};
#endif
