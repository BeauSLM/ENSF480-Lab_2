// TODO: Documentation!
#ifndef SHAPE_H
#define SHAPE_H
#include <string.h>
#include "point.h"
class Shape {
    protected:
        Point origin;
        char *shapeName; // dynamically allocated by the constructor
    public:
        Shape(const Point origin, const char *shapeName);
        ~Shape() { delete [] shapeName; }

        const Point& getOrigin() const { return origin; }
        char *getName() const { return shapeName; }

        virtual void display() const; // virtual? if so, provide definition for this class (see slide 25)
        double distance(Shape& other) const;
        static double distance(Shape& the_shape, Shape& other);
        void move(double dx, double dy);
};
#endif
