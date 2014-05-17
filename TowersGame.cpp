#include "TowersGame.h"

TowersGame::TowersGame() {
}

TowersGame::~TowersGame() {
}

void TowersGame::mainLoop() {
    double last = glfwGetTime();
    double delta = 1.0 / 10;
    double now =  glfwGetTime();
    
    while(!glfwWindowShouldClose(window.getGLFWwindow())){
        now = glfwGetTime();
        while(now - last > delta){
            last = glfwGetTime();
                glClear(GL_COLOR_BUFFER_BIT);
        
                window.render();
        
                if(glfwGetKey(window.getGLFWwindow(), GLFW_KEY_LEFT) == GLFW_PRESS){
                        window.movePointerLeft();
                }
                if(glfwGetKey(window.getGLFWwindow(), GLFW_KEY_RIGHT) == GLFW_PRESS){
                        window.movePointerRight();
                }
                if(glfwGetKey(window.getGLFWwindow(), GLFW_KEY_SPACE) == GLFW_PRESS){
                        window.moveBlock();
                }
                
        
                glfwSwapBuffers(window.getGLFWwindow());
                glfwPollEvents();
        }
    }
}

