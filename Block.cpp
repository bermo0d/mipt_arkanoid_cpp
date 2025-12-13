#include "Block.h"
#include "Graph_lib/Graph.h"

Block::Block (Point xy, int width, int height) : Rectangle(xy, width, height) {

}

int Block::get_health() {
    return health
}

int Block::set_health(int new_health) {
    health = new_health;
}

int Block::deal_damage() {
    health = max(health - 1, 0);
}