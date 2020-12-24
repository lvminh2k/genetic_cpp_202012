#ifndef Figure_H_
#define Figure_H_
#include <vector>
#include "DisplayResolution.h"
#include "Point.h"
using namespace std;

class Figure{
public:
    Figure();
    virtual vector<Point> Draw(DisplayResolution& displayResolution);
}
#endif