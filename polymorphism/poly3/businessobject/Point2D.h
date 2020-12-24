#ifndef businessobject_Point2D_H_
#define businessobject_Point2D_H_
#include "Figure.h"
#include "../ui/Point.h"
class Point2D: public Figure{
private:
    float X, Y;
public:
    Point2D();
    Point2D(float x, float y);
    vector<Point> PrepareDraw();
    Point ToPoint();
    float GetX();
    float GetY();
};
#endif