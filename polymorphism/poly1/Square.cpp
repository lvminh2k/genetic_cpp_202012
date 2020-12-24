#include "Square.h"

Square::Square(){}
Square::Square(float a){
    width = a;
    height = width;
}
void Square::Input(istream& inDev){
    inDev >> width;
    height = width;
}