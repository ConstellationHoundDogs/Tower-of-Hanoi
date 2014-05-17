/* 
 * File:   Block.cpp
 * Author: vladimir
 * 
 * Created on May 16, 2014, 10:32 PM
 */

#include "Block.h"

Block::Block(int diameter, float r, float g, float b) {
    this->diameter = diameter;
    this->r = r;
    this->g = g;
    this->b = b;
}

Block::~Block() {
}

