#pragma once
/*
ENG
soon
RU
Engine - îñíîâíàÿ ÷àñòü ïðîãðàììû. Â íà÷àëå èíèöèàëèçèðóåòñÿ áàçîâûå ïàðàìåòðû, 
*/

int universeInterface(Universe targetUniverse)
{
	std::cout
		<< "\n universeInterface:"
		<< "\n > Worlds: " << targetUniverse.getWorldCount()
		<< targetUniverse.getCreatureCount();
	return NULL;
}

int engine()
{
	std::thread wndThread(openGLlaunch);						// define openGL to thread
	Universe universe;											// univers class init

	universeInterface(universe);
	return NULL;
}
