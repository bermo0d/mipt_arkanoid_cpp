#include "Block.h"
#include "BlocksMatrix.h"
#include "Graph_lib/Graph.h"

#define field_width 800
#define field_height 400

BlocksMatrix::BlocksMatrix (int height, int width) : width(width), height(height) {

    field.resize(width);

    for (int i = 0; i < width; i++) {
        field[i].resize(height);
    }

    generate();
}

void BlocksMatrix::generate () {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            field[i][j] = new Block(Graph_lib::Point(j*(field_width/width), i*(field_height/height)), field_width/width, 
        field_height/height, 5);  // 5 = hp
        }
    }
}

int BlocksMatrix::get_height() const {
    return height;
}

int BlocksMatrix::get_width() const {
    return width;
}

Block* BlocksMatrix::get_block(int x, int y) const {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return field[x][y];
    }
    return nullptr; 
}