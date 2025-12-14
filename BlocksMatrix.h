#ifndef ARKANOID_BLOCKSMATRIX_H
#define ARKANOID_BLOCKSMATRIX_H

#include <vector>

class Block;

class BlocksMatrix {
public:
    BlocksMatrix(int height, int width);
    Block* get_block(int x, int y) const;
    int get_height() const;
    int get_width() const;
    void set_block(int x, int y);
    void del_block(int x, int y);

private:
    int height;
    int width;
    std::vector<std::vector<Block*>> field;
    void generate();
};

#endif //ARKANOID_BLOCKSMATRIX_H