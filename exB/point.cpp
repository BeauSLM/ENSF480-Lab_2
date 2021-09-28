// TODO: i think we may need to make a separate function
// to print doubles in the format #####.## as specified
// in the assignment

#include <iostream>
#include <iomanip>
#include <cmath>
#include "point.h"
using namespace std;

void Point::display() const {
    cout << fixed << "X-coordinate: " << setw(8) << setprecision(2) << x << endl;
    cout << fixed << "Y-coordinate: " << setw(8) << setprecision(2) << y << endl;
}

double Point::distance(const Point& the_point, const Point& other) {
    double dx = the_point.getX() - other.getX();
    double dy = the_point.getY() - other.getY();

    return sqrt(dx * dx + dy * dy);
}

double Point::distance(const Point& other) const {
    return distance(*this, other);
}
