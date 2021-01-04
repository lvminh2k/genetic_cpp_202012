#include "Rectangle.h"

Rectangle::Rectangle(){}
Rectangle::Rectangle(Point2D topLeft, Point2D bottomRight){
    TopLeft = topLeft;
    BottomRight = bottomRight;
}
vector<Point> Rectangle::PrepareDraw(){
    vector<Point> v;
    v.resize(0);
    v.push_back(TopLeft.ToPoint());
    int y = (int) TopLeft.GetY();
    int x = (int) BottomRight.GetX();
    Point topRight(x, y);
    v.push_back(topRight);
    v.push_back(BottomRight.ToPoint());
    y = (int) BottomRight.GetY();
    x = (int) TopLeft.GetX();
    Point bottomLeft(x, y);
    v.push_back(bottomLeft);
    return v;
}
