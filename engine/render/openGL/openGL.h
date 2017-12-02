#pragma once

int openGLloop();
int openGLlaunch();								// all OGL in one thread
												// mean init + loop in one thread

int openGLlaunch()
{
	OGLwindow mainWnd;
	mainWnd.initialization();
	mainWnd.loop();
	return NULL;
}
