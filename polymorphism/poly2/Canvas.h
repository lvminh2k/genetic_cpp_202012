#ifndef Canvas_H_
#define Canvas_H_
#include "DisplayResolution.h"
#include "DrawPoint.h"

class Canvas{

public:
    Canvas();
    void DrawPoint(DrawPoint& p, DisplayResolution& displayResolution);
};
#endif 