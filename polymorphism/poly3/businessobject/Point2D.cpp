#include "Point2D.h"
#include "../ui/Point.h"
Point2D::Point2D(){}
Point2D::Point2D(float x, float y){
    X = x; Y = y;
}
vector<Point> Point2D::PrepareDraw(){
    vector<Point> v;
    v.resize(0);
    int j = (int) X;
    int i = (int) Y;
    Point p(j, i);
    v.push_back(p);
    return v;
}
Point Point2D::ToPoint(){
    int j = (int) X;
    int i = (int) Y;
    Point p(j, i);
    return p;
}
float Point2D::GetX(){
    return X;
}
float Point2D::GetY(){
    return Y;
}