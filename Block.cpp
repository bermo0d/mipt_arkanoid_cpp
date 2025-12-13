#include "Block.h"
#include "Graph_lib/Graph.h"

Block::Block (Point xy, int width, int height, int hp) : Rectangle(xy, width, height), health(hp) {

}

int Block::get_health() const{
    return health;
}

void Block::set_health(int new_health) {
    health = new_health;
}

void Block::deal_damage() {
    health = std::max(health - 1, 0);
}