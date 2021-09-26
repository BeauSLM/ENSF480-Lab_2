// TODO: Documentation!
class Point {
    private:
        double x, y;
        static int id;
    public:
        Point(double x, double y):
            x(x), y(y) {}
        void display() const;

        // static?
        static int counter() { return id - 1000; }
        static double distance(const Point&, const Point&);
        double distanceTo(const Point&) const;
};
