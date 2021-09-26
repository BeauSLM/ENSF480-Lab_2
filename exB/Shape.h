#include "Point.h"
class Shape {
    private:
        Point origin;
        char *shapeName; // dynamically allocated by the constructor
    public:
        Shape(Point origin, char *shapeName):
            origin(origin), shapeName(shapeName) {};
        ~Shape() { delete [] shapeName; }
        const Point& getOrigin() const;
        char *getName() const { return shapeName; }
        void display() const;
        double distance(Shape& other);
        static double distance(Shape& the_shape, Shape& other);
        void move(double dx, double dy);
};
