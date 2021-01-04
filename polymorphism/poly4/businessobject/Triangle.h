#ifndef businessobect_Triangle_H_
#define businessobect_Triangle_H_
#include "Figure.h"
#include "Point2D.h"
class Triangle: public Figure{
private:
    Point2D P1, P2, P3;
public:
    Triangle();
    Triangle(Point2D p1, Point2D p2, Point2D p3);
    vector<Point> PrepareDraw();
};
#endif