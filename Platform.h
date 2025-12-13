#ifndef ARKANOID_PLATFORM_H
#define ARKANOID_PLATFORM_H

#include "Graph_lib/Graph.h"

using namespace Graph_lib;

class Platform : public Rectangle {
public:
    Platform(Point xy, int ww, int hh);

    void setPos(int x, int y);
};


#endif //ARKANOID_PLATFORM_H
