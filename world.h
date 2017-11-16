#pragma once
#include "worldParts.h"

class World
{
public:

private:
	bool
		status,
		saving,
		quit;

	std::vector <Creature> creatureCollection;
	std::vector <Item> itemCollection;
	std::vector <Object> objectCollection;
	std::vector <Effect> effectCollection;
};