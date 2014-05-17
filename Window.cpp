#include <GLFW/glfw3.h>
#include <iostream>
#include "Window.h"

using namespace std;

Window::Window() {
    
    if(!glfwInit()){
        cerr << "[ERROR] Could not init glwf.";
        exit(EXIT_FAILURE);
    }
 
    this->window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE, NULL, NULL);
    
    if(!window){
        cerr << "[ERROR] Could not create mainWindow.";
        exit(EXIT_FAILURE);
    }
    
    glfwMakeContextCurrent(window);
    
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);    
    
    glViewport(0, 0, width, height);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, height, 0, 0, 1);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.1, 0.0, 0.0, 0.0); 
    containers[0].add(new Block(170, 0.2f, 0.0f, 0.0f));
    containers[0].add(new Block(190, 0.3f, 0.0f, 0.0f));
    containers[0].add(new Block(70,  0.4f, 0.0f, 0.0f));
    //containers[0].pop();
    
    
}

void Window::render() {
    drawContainers();
}

void Window::drawContainers() {
    
    for(int i = 0, j = 0; i < 3; i++, j += 210){
        containers[i].draw(j, 50);
    }
}

Window::~Window() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

