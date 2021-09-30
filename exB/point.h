#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Represents a 1D point with an x and y coordinate
//Comes with functions to calculate the distance between points
//and a counter of the total number of points
class Point {
    private:
        static int pointCount; //the current number of active points
        double x, y; //the x and y coordinates of the points
        int id; //each point object has a unique id, starting at 1001
        friend class Shape;
    public:
        //constructor that also increments the point count
        Point(double x, double y) : x(x), y(y) {
            pointCount++;
            id = pointCount + 1000;
        }
        //destructor that decrements the point count
        ~Point() { pointCount--; }

        //getters and setters
        void setX(const double x) { this->x = x; }
        void setY(const double y) { this->y = y; }
        double getX() const { return x; }
        double getY() const { return y; }
        static int counter() { return pointCount; }

        //displays the x and y coord
        void display() const;
        //returns the distance between any 2 points (static)
        static double distance(const Point& the_point, const Point& other);
        //returns the distance between this point and another
        double distance(const Point& other) const;
};
#endif
