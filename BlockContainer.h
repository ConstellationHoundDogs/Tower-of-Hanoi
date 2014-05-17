#ifndef BLOCKCONTAINER_H
#define	BLOCKCONTAINER_H

#include "Block.h"

class BlockContainer {
public:
    BlockContainer();
    ~BlockContainer();
    
    void draw(int x, int y);
    bool add(Block* block);
    Block* getTopBlock();
    void deleteTopBlock();
    
private:
    
    Block* blocks[3];
    int size;
    
    void drawBlocks(int x, int y);
    
};

#endif	/* BLOCKCONTAINER_H */

