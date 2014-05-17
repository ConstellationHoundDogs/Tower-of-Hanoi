#ifndef WINDOW_H
#define	WINDOW_H

#include <GLFW/glfw3.h>

#include "BlockContainer.h"

class Window {

public:
    Window();
    ~Window();
    
    GLFWwindow* getGLFWwindow(){return window;};
    
    void render();
    
    void movePointerRight();
    void movePointerLeft();
    void moveBlock();
    
private:
    
    bool movingBlock = false;
    const int WINDOW_WIDTH = 640;
    const int WINDOW_HEIGHT = 480;
    const char* TITLE = "Towers";
    Block* bufferBlock;
    GLFWwindow* window;
    
    BlockContainer containers[3];
    void drawContainers();
    
    int pointerPosititon;
    void drawPointer();
    
    int gotBlockFrom = 0;
    void moveBlockStart();
    void moveBlockEnd();
    
    
};

#endif	/* WINDOW_H */

