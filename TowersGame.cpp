#include "TowersGame.h"

TowersGame::TowersGame() {
}

TowersGame::~TowersGame() {
}

void TowersGame::mainLoop() {
    double last = glfwGetTime();
    double delta = 1.0 / 60;
    double now =  glfwGetTime();
    
    while(!glfwWindowShouldClose(window.getGLFWwindow())){
        glClear(GL_COLOR_BUFFER_BIT);
        
        window.render();
        
        glfwSwapBuffers(window.getGLFWwindow());
        glfwPollEvents();
    }
}

