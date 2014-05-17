#include <GLFW/glfw3.h>
#include <iostream>
#include <cstdlib>
#include "BlockContainer.h"

BlockContainer::BlockContainer() {
}

void BlockContainer::draw(int x, int y) {
    glColor3f(1.0f, 0.f, 0.f);
    glBegin(GL_QUADS);
    glVertex2f( x + 10,  y + 330);
    glVertex2f( x + 200, y + 330);
    glVertex2f( x + 200, y + 360);
    glVertex2f( x + 10,  y + 360);
        
    glVertex2f( x + 90,  y + 330);
    glVertex2f( x + 90,  y + 40 );
    glVertex2f( x + 110, y + 40 );
    glVertex2f( x + 110, y + 330);
    glEnd();
    drawBlocks(x, y);
}

bool BlockContainer::add(Block* block) {
    if(size > 0){
        if(blocks[size - 1]->getDiameter() >= block->getDiameter()){
            blocks[size++] = block;
            return true;
        }
    }else{
        blocks[size++] = block;
        return true;
    }
    return false;
}

Block* BlockContainer::getTopBlock(){
    if(size > 0){
        Block* ret = blocks[size - 1];
        return ret;
    }
    return NULL;
}

void BlockContainer::deleteTopBlock() {
    if(size > 0){
        size--;
    }
}


void BlockContainer::drawBlocks(int x, int y) {
    glBegin(GL_QUADS);
    for(int i = 0; i < size; i++){
        if(blocks[i] != NULL){
            glColor3f(blocks[i]->getR(), blocks[i]->getG(), blocks[i]->getB());
            int gap = (190 - blocks[i]->getDiameter()) / 2;
            glVertex2f( x + 10  + gap ,  y + (330 - (i + 1) * 30));
            glVertex2f( x + 200 - gap ,  y + (330 - (i + 1) * 30));
            glVertex2f( x + 200 - gap ,  y + (360 - (i + 1) * 30));
            glVertex2f( x + 10  + gap ,  y + (360 - (i + 1) * 30));
        }
    }
    glEnd();
}


BlockContainer::~BlockContainer() {
}

