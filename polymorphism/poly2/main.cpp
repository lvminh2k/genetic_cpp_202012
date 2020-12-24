#include <iostream>
#include "Canvas.h"
#include "DisplayResolution.h"
#include "DrawPoint.h"
using namespace std;
int main(){
    DisplayResolution displayResolution(600, 800);
    Canvas canvas;
    DrawPoint p1(1,2);
    canvas.DrawPoint(p1, displayResolution);

    DrawPoint p2(5,6);
    canvas.DrawPoint(p2, displayResolution);
    return 0;
}