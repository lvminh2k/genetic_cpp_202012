#include "MyCanvas.h"
#include "../libs/Point.h"
#include <vector>
using namespace std;
MyCanvas::MyCanvas(Canvas cv){
    canvas = cv;
    //we do something here
    //canvas.DoSomeThing()
}
void MyCanvas::MyDraw(Figure* f){
    auto listOfPoint = f->PrepareDraw();
    for (Point p:listOfPoint){
        canvas.Draw(&p);
    }
}