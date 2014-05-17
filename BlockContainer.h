#ifndef BLOCKCONTAINER_H
#define	BLOCKCONTAINER_H

#include "Block.h"

class BlockContainer {
public:
    BlockContainer();
    ~BlockContainer();
    
    void draw(int x, int y);
    void add(Block* block);
    Block* pop();
    
private:
    
    Block* blocks[3];
    int size;
    
    void drawBlocks(int x, int y);
    
};

#endif	/* BLOCKCONTAINER_H */

