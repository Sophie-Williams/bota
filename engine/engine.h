#pragma once
/*
ENG
soon
RU
Engine - основная часть программы. В начале инициализируется базовые параметры, 
*/




int engine()
{
		coreLoopStatus		= true,								// status for
		renderLoopStatus	= true,								// while() loop
		inputLoopStatus		= true;

	Universe universe;											// univers class init
	std::thread wndThread(openGLlaunch);						// define openGL to thread
	std::thread inputThread(input);								// there are three threads:
																// Graphic, input and main thread -
	coreLoop(universe);													// core (game) loop.

	return NULL;
}
