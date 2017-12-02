#pragma once

class OGLwindow
{
public:
	static void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mode);
	int initialization();
	int loop();
	int loadLoop();
private:
	GLFWwindow* window;
	std::thread wndThread;
};
void OGLwindow::keyCallback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, GL_TRUE);
	}
}
int OGLwindow::initialization()
{
	glfwInit();												// glfw initialization
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	window = glfwCreateWindow(1920, 1080, "window", nullptr, nullptr);
	if (window == nullptr)									// create window
	{
		std::cout << "\n failed to create GLFW window";
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, keyCallback);

	glewExperimental = GL_TRUE;								// initialization GLEW
	if (glewInit() != GLEW_OK)
	{
		std::cout << "\n Failed to initialize GLEW";
		return -1;
	}

	int width, height;										// size of window (draw)
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
}
int OGLwindow::loop()
{
	while (!glfwWindowShouldClose(window))					// loop
	{
		glfwPollEvents();
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
	}

	glfwTerminate();										// terminate
	return NULL;
}
int OGLwindow::loadLoop()
{
	return NULL;
}