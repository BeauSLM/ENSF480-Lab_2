// TODO: Documentation!
// TODO: " Access functions, getters and setters, as needed. " -- maybe???
#ifndef POINT_H
#define POINT_H
class Point {
    private:
        double x, y;
        static int id;
        friend class Shape;
    public:
        Point(double x, double y):
            x(x), y(y) {} // TODO: initialize id (how?)
        double getX() const { return x; }
        double getY() const { return y; }

        void display() const;
        static int counter() { return id - 1000; } // static?
        static double distance(const Point& the_point, const Point& other);
        double distance(const Point& other) const;
};
#endif
