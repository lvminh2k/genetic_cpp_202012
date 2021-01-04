#ifndef businessobject_Point2D_H_
#define businessobject_Point2D_H_
#include "../libs/Point.h"
#include "Figure.h"
#include <vector>
using namespace std;
class Point2D: public Figure{
private:
    float X, Y;
public:
    Point2D();
    Point2D(float x, float y);
    Point ToPoint();
    float GetX();
    float GetY();
    vector<Point> PrepareDraw();
};
#endif