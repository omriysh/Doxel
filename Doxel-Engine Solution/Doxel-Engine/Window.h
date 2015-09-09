#pragma once
#include <GLFW\glfw3.h>

// #define Window(Class)

Class Window()
{
public:
Window(); //  empty
~Window(); // empty

void init(int width, int height, char* title); // Init the window
void destroy(); // Destroy the window

private:
glfwWindow* m_window = nullptr;
int m_width, m_height;
char* m_title;




}
