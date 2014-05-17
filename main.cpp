#include <cstdlib>
#include <GLFW/glfw3.h>

#include "TowersGame.h"

using namespace std;

int main(int argc, char** argv) {
    
    TowersGame* game = new TowersGame();
    game->mainLoop();
    
    return 0;
}

