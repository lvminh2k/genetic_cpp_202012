#ifndef businessobject_Figure_H_
#define businessobject_Figure_H_
#include <vector>
#include "../ui/Point.h"
using namespace std;
class Figure{
public:
    Figure();
    virtual vector<Point> PrepareDraw();
};
#endif