#ifndef ARKANOID_PLATFORM_H
#define ARKANOID_PLATFORM_H

#include "../Graph_lib/Point.h"
#include <vector>
#include <functional>

using namespace Graph_lib;


class Platform {
public:
    Platform(int xx, int yy, int ww, int hh);
    Platform(Point xy, int ww, int hh);


    void setX(int newX);
    void setY(int newY);
    int getX() { return x; }
    int getY() { return y; }
    int getWidth() { return width; }
    int getHeight() { return height; }

    std::function<void()> coordsChangedCallback;
    void setCallback(const std::function<void()>& cb) {
        coordsChangedCallback = cb;
    }

private:
    int x;
    int y;
    int width;
    int height;
};


#endif //ARKANOID_PLATFORM_H
