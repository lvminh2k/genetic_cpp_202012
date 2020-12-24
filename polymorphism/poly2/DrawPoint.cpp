#include "DrawPoint.h"

DrawPoint::DrawPoint(){}
DrawPoint::DrawPoint(int x, int y){
    X = x;
    Y = y;
}
int DrawPoint::GetX(){
    return X;
}
int DrawPoint::GetY(){
    return Y;
}