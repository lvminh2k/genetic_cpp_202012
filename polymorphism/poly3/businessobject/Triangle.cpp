#include "Triangle.h"

Triangle::Triangle(){}
Triangle::Triangle(Point2D p1, Point2D p2, Point2D p3){
    P1 = p1;
    P2 = p2;
    P3 = p3;
}
vector<Point> Triangle::PrepareDraw(){
    vector<Point> v;
    v.resize(0);
    v.push_back(P1.ToPoint());
    v.push_back(P2.ToPoint());
    v.push_back(P3.ToPoint()); 
    return v;
}