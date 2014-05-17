#ifndef TOWERSGAME_H
#define	TOWERSGAME_H

#include <iostream>
#include "Window.h"

class TowersGame {
public:
    
    TowersGame();
    ~TowersGame();
    
    void mainLoop();
    
private:
    Window window;
};

#endif	/* TOWERSGAME_H */

