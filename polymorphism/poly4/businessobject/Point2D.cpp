#include "Point2D.h"
Point2D::Point2D(){}
Point2D::Point2D(float x, float y){
    X = x; Y = y;
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
vector<Point> Point2D::PrepareDraw(){
    vector<Point> v;
    v.resize(0);
    v.push_back(this->ToPoint());
    return v;
}