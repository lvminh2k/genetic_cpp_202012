#ifndef Rectangle_H_
#define Rectangle_H_
#include <iostream>
using namespace std;
class Rectangle{
public: 
    float width, height;
public:
    Rectangle();
    Rectangle(float w, float h);
    void Input(istream& inDev);
    float Area();
};
#endif