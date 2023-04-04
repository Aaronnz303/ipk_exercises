#include <vector>
#include <iostream>
#include "polygon.hh"


int main()
{
    const Point p1(0.0, 0.0);
    const Point p2(1.0, 0.0);
    const Point p3(0.0, 1.0);
    const Point p4(1.0, 1.0);

    std::vector<Point> Vector1 = {p1,p2,p3,p4};
    const std::vector<double> xlist = {1.0,2.0,3.0,4.0};
    const std::vector<double> ylist = {5.0,6.0,7.0,8.0};

    Polygon polygon1(Vector1);
    Polygon polygon2(xlist, ylist);

    std::cout << "Der Vector 1 hat " << polygon1.corners() << " Eckpunkte und eine Flaeche von " << polygon1.area() << std::endl;
    std::cout << "Der Vector 2 hat " << polygon2.corners() << " Eckpunkte und eine Flaeche von " << polygon2.area() << std::endl;
    return 0;
}