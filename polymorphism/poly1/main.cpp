#include <iostream>
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main(){
    Rectangle r;
    r.Input(cin);
    cout << r.Area() << endl ;

    Square s;
    s.Input(cin);
    cout << s.Area() << endl ;

    Rectangle* pRec;
    pRec = new Square();
    pRec->Input(cin);
    cout << pRec->Area() << endl;
    return 0;
}