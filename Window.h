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
    
private:
    
    const int WINDOW_WIDTH = 640;
    const int WINDOW_HEIGHT = 480;
    const char* TITLE = "Towers";
    GLFWwindow* window;
    
    BlockContainer containers[3];
    
    void drawContainers();
    
};

#endif	/* WINDOW_H */

