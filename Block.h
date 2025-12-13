#ifndef ARKANOID_BLOCK_H
#define ARKANOID_BLOCK_H

#include "Graph_lib/Graph.h"

using namespace Graph_lib;

class Block : public Rectangle  {
public:
    Block(Point xy, int width, int height);

    int get_health();
    void set_health(int new_health);
    void deal_damage();
}