#include "Platform.h"

Platform::Platform(int xx, int yy, int ww, int hh) : x{xx}, y{yy}, width{ww}, height{hh} {}
Platform::Platform(Point xy, int ww, int hh) : x{xy.x}, y{xy.y}, width{ww}, height{hh} {}

void Platform::setX(int newX) {
    x = newX;
    if (x < 0) {
        x = 0;
    } else if (x + width > 800) { // 800 - screen width
        x = 800 - width;
    }

    coordsChangedCallback();
}

void Platform::setY(int newY) {
    y = newY;
    coordsChangedCallback();
}


