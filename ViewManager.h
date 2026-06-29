#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "ShaderManager.h"
#include "Camera.h"

class ViewManager
{
public:
    ViewManager(ShaderManager* pShaderManager);
    ~ViewManager();

    GLFWwindow* CreateDisplayWindow(const char* windowTitle);
    void PrepareSceneView();

    static void Mouse_Position_Callback(GLFWwindow* window, double xMousePos, double yMousePos);
    static void Mouse_Scroll_Callback(GLFWwindow* window, double xOffset, double yOffset);
private:
    ShaderManager* m_pShaderManager;
    GLFWwindow* m_pWindow;

    void ProcessKeyboardEvents();
};