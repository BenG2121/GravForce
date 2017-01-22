// GravForce.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include "glfw\glfw3.h"
#include "defs.h"

int retVal = 0;
GLFWwindow * window = NULL;

static void key_callback(GLFWwindow*, int, int, int, int);


int main()
{
	std::cout << "---- Start programm ----" << std::endl;
	/*Initialize platform specific things*/
	if (glfwInit() != GL_TRUE)
	{
	//	throw std::runtime_error("error 1");
		std::cout << "Error: glfwInit() " << __LINE__ << std::endl;
	}
	/*Create window in window mode*/
	window = glfwCreateWindow(MAIN_nWindow_Width, MAIN_nWindow_Height, MAIN_nWindow_Name, MAIN_nWindow_Monitor, MAIN_nWindow_Share);
	if (!window)
	{
	//	throw std::runtime_error("error 2");
		std::cout << "Error: glfwCreateWindow() = " <<  window << " At line:"<<__LINE__ << std::endl;
	}

	/*Set pressing Esacpe to close window*/
	glfwSetKeyCallback(window, key_callback);

	/*Game loop - looping until "closing" of window is called*/
	while (!glfwWindowShouldClose(window))
	{
		/*Required to actually get callbacks*/
		glfwPollEvents();
	}
	return 0;
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);
}