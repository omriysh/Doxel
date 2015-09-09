#pragma once
#include <GLFW\glfw3.h>



#define DEFAULT_TITLE "Doxel Engine"
#define DEFAULT_WINDOW_WIDTH 800
#define DEFAULT_WINDOW_HEIGHT 600


class Window
{
public:
Window(); ///<  empty
~Window(); ///< empty

bool init(int width , int height , char* title = DEFAULT_TITLE); // Init the window, will return true if successful
bool isInitialized() { return m_window != nullptr; }

void destroy(); ///< Destroy the window

void update(); ///< to be called at the end of every frame

void setWindowClose();
bool shouldWindowClose();

private:
GLFWwindow* m_window = nullptr;
int m_width, m_height;
char* m_title;




};
