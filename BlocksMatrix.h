#ifndef ARKANOID_BLOCKSMATRIX_H
#define ARKANOID_BLOCKSMATRIX_H

#include "Block.h"
#include <vector>


class BlocksMatrix {
public:
    BlocksMatrix(int matrixHeight, int matrixWidth);
    Block* get_block(int x, int y) const;
    int getMatrixHeight() const;
    int getMatrixWidth() const;
    int getBlockHeight() const;
    int getBlockWidth() const;
    void set_block(int x, int y);
    void del_block(int x, int y);

private:
    int matrixHeight;
    int matrixWidth;
    int blockHeight;
    int blockWidth;
    std::vector<std::vector<Block*>> field;
    void generate();
};

#endif //ARKANOID_BLOCKSMATRIX_H