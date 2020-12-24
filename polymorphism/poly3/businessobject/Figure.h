#ifndef businessobject_Figure_H_
#define businessobject_Figure_H_
#include <vector>
#include "../ui/Point.h"
using namespace std;
class Figure{
public:
    virtual vector<Point> PrepareDraw() = 0;
};
#endif