// GravForce.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include "gl\glfw.h"
#include "defs.h"

int retVal = 0;




int main()
{
	std::cout << "---- Start programm ----" << std::endl;
	retVal = glfwInit();
	if (retVal != GL_TRUE)
	{
		throw std::runtime_error("error 1");
	}
	retVal = glfwOpenWindow(MAIN_nWindow_Width, MAIN_nWindow_Height,
		GLFW_RED_BITS, GLFW_GREEN_BITS, GLFW_BLUE_BITS,
		GLFW_ALPHA_BITS, GLFW_DEPTH_BITS, GLFW_STENCIL_BITS, GLFW_WINDOW);
	if (retVal != GL_TRUE)
	{
		throw std::runtime_error("error 2");
	}

	while (1) {} //Force console to stay open
	glfwTerminate();
	return 0;
}

