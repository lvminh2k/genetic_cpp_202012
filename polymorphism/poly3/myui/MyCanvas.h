#ifndef myui_MyCanvas_H_
#define myui_MyCanvas_H_
#include "../ui/Canvas.h"
#include "../businessobject/Figure.h"
class MyCanvas{
private:
    Canvas canvas;
public:
    MyCanvas(Canvas cv);
    void MyDraw(Figure* f);
};
#endif