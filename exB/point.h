// TODO: Documentation!
// TODO: " Access functions, getters and setters, as needed. " -- maybe???
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point {
    private:
        static int pointCount;
        double x, y;
        int id;
        friend class Shape;
    public:
        Point(double x, double y) : x(x), y(y) {
            pointCount++;
            id = pointCount + 1000;
        }

        void setX(const double x) { this->x = x; }
        void setY(const double y) { this->y = y; }
        double getX() const { return x; }
        double getY() const { return y; }
        static int counter() { return pointCount; }

        void display() const;
        static double distance(const Point& the_point, const Point& other);
        double distance(const Point& other) const;
};
#endif
