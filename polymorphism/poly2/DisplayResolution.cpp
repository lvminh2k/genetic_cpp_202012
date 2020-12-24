#include "DisplayResolution.h"
//#include <some_drive_library>

DisplayResolution::DisplayResolution();
DisplayResolution::DisplayResolution(int maxWidth, int maxHeight){
    /* get drive*/

    Width = maxWidth;
    Height = maxWidth;
}
int DisplayResolution::getMaxWidth(){
    return Width;
}
int DisplayResolution::getMaxHeight(){
    return Height;
}