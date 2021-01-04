#include "Canvas.h"
#include <iostream>
using namespace std;
//#include <driver_library
Canvas::Canvas(){
    //load driver
}
void Canvas::Draw(Point* p){
    //draw point in screen
    cout << "draw (" << p->GetX() << ", " << p->GetY() << ")"<< endl;
}