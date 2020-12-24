#include "Canvas.h"
#include <vector>
using namespace std;

Canvas::Canvas(){}

void Canvas::DrawPoint(DrawPoint& p, DisplayResolution& displayResolution){
    //draw a point p on screen
    cout << "point(" << p.GetX() << "," << p.GetY() << ") has been drawn on screen" << endl;
}
