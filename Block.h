#ifndef ARKANOID_BLOCK_H
#define ARKANOID_BLOCK_H

#include "Graph_lib/Graph.h"

using namespace Graph_lib;

class Block : public Rectangle  {
public:
    Block(Point xy, int width, int height, int hp);

    int get_health() const;
    void set_health(int new_health);
    void deal_damage();

private:
    int health;
};

#endif // ARKANOID_BLOCK_H