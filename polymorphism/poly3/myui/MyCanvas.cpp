#include "MyCanvas.h"
#include "../ui/Point.h"
#include <vector>
using namespace std;
MyCanvas::MyCanvas(Canvas cv){
    canvas = cv;
    //we do something here
    //canvas.DoSomeThing()
}
void MyCanvas::MyDraw(Figure* f){
    vector<Point> listOfPoint = f->PrepareDraw();
    for (Point p:listOfPoint){
        Point* pPoint;
        pPoint = &p;
        canvas.Draw(pPoint); 
        //canvas.Draw(&p);
    }
}