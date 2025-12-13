#include "Platform.h"
#include "Graph_lib/Graph.h"
#include "iostream"

using namespace Graph_lib;


Platform::Platform(Point xy, int ww, int hh) : Rectangle(xy, ww, hh) {

}

void Platform::setPos(int x, int y) {
    set_point(0, Point{x, y});
}
