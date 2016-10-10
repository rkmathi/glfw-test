#include "main.hpp"

int main(void)
{
    if (!glfwInit()) { return -1; }
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello GLFW", NULL, NULL);
    if (!window) { glfwTerminate(); return -2; }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        /* here */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
