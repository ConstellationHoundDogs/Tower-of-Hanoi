#ifndef BLOCK_H
#define	BLOCK_H

class Block {
public:
    Block(int diameter, float r, float g, float b);
    ~Block();
    
    int getDiameter(){return diameter;};
    float getR(){return r;};
    float getG(){return g;};
    float getB(){return b;};
    
private:
    int diameter;
    
    float r;
    float g;
    float b;
};

#endif	/* BLOCK_H */

