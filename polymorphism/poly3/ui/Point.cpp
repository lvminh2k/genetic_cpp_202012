#include "Point.h"

Point::Point(){}
Point::Point(int x, int y){
    X = x;
    Y = y;
}
int Point::GetX(){
    return X;
}
int Point::GetY(){
    return Y;
}