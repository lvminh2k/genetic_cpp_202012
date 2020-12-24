#include <iostream>
#include "ui/Point.h"
#include "ui/Canvas.h"
#include "myui/MyCanvas.h"
#include "businessobject/Point2D.h"
#include "businessobject/Figure.h"
#include "businessobject/Rectangle.h"
#include "businessobject/Triangle.h"
#include <vector>
using namespace std;

void display_menu1(){
    
}
int main(){
    Canvas canvas;
    MyCanvas myCanvas(canvas);
    
    vector<Figure *> allFigure;
    allFigure.resize(0);

    bool isContinue = true;
    while (isContinue){
        cout << "Select figure: " << endl;
        cout << "1. Point2D " << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "0. Stop" << endl;
        int choice;
        cout << "Your choice: ";
        cin >> choice;
        if (choice == 0){
            isContinue = false;
        }
        else if (choice == 1) {
            cout << "Input a point. " << endl;
            float x, y;
            cout << "P.x = "; cin >> x;
            cout << "P.y = "; cin >> y;
            Figure* f = new Point2D(x, y);
            allFigure.push_back(f);
        }
        else if (choice == 2){
            cout << "Input a rectangle. " << endl;
            float tlX, tlY, brX, brY;
            cout << "TopLeft.x = "; cin >> tlX;
            cout << "TopLeft.y = "; cin >> tlY;
            cout << "BottomRight.x = "; cin >> brX;
            cout << "BottomRight.y = "; cin >> brY;
            Point2D tl(tlX, tlY);
            Point2D br(brX, brY);
            Figure* f = new Rectangle(tl, br);
            allFigure.push_back(f);
        }
        else if (choice == 3){
            cout << "Input a triangle. " << endl;
            float p1X, p1Y, p2X, p2Y, p3X, p3Y;
            cout << "P1.x = "; cin >> p1X;
            cout << "P1.y = "; cin >> p1Y;
            cout << "P2.x = "; cin >> p2X;
            cout << "P2.y = "; cin >> p2Y;
            cout << "P3.x = "; cin >> p3X;
            cout << "P3.y = "; cin >> p3Y;
            Point2D P1(p1X, p1Y), P2(p2X, p2Y), P3(p3X, p3Y);
            Figure* f = new Triangle(P1, P2, P3);
            allFigure.push_back(f);
        }
    }
    
    cout << "draw all figures." << endl;
    for (Figure *f:allFigure){
        myCanvas.MyDraw(f);
    }
    return 0;
}