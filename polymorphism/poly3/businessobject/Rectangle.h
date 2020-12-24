#ifndef businessobject_Rectangle_H_
#define businessobject_Rectangle_H_
#include "Figure.h"
#include "Point2D.h"
class Rectangle: public Figure{
private:
    Point2D TopLeft, BottomRight;
public:
    Rectangle();
    Rectangle(Point2D topLeft, Point2D bottomRight);
    vector<Point> PrepareDraw();
};
#endif 