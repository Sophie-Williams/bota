#pragma once

class World
{
public:
	World(){}
	
	// getCount of list
	int getCreatureCount();
	int getItemCount();
	int getEffectCount();
	int getObjectCount();

	// returnData
	Creature	getCreature(int ID);
	Item		getItem(int ID);
	Effect		getEffect(int ID);
	Object		getObject(int ID);
	
	// replace
	int replaceCreature(Creature replace, int ID);
	int replaceItem(Item replace, int ID);
	int replaceEffect(Effect replace, int ID);
	int replaceObject(Object replace, int ID);

	// add
	int addCreature(Creature add);
	int addItem(Item add);
	int addEffect(Effect add);
	int addObject(Object add);

	// remove
	int removeCreature(int id);
	int removeItem(int id);
	int removeEffect(int id);
	int removeObject(int id);


private:
	std::vector <Creature>	creatureList;
	std::vector <Item>		itemList;
	std::vector <Effect>	effectList;
	std::vector <Object>	objectList;
};

// creature
int			World::getCreatureCount()
{
	return creatureList.size();
}
Creature	World::getCreature(int ID)
{
	return creatureList[ID];
}
int			World::replaceCreature(Creature replace, int ID)
{
	creatureList[ID] = replace;
}
int			World::addCreature(Creature add)
{
	creatureList.push_back(add);
	return NULL;
}
int			World::removeCreature(int id)
{
	creatureList.erase(creatureList.begin() + id);
	return NULL;
}
// item
int			World::getItemCount()
{
	return itemList.size();
}
Item		World::getItem(int ID)
{
	return itemList[ID];
}
int			World::replaceItem(Item replace, int ID)
{
	itemList[ID] = replace;
}
int			World::addItem(Item add)
{
	itemList.push_back(add);
	return NULL;
}
int			World::removeItem(int id)
{
	itemList.erase(itemList.begin() + id);
	return NULL;
}
// object
int			World::getObjectCount()
{
	return objectList.size();
}
Object		World::getObject(int ID)
{
	return objectList[ID];
}
int			World::replaceObject(Object replace, int ID)
{
	objectList[ID] = replace;
}
int			World::addObject(Object add)
{
	objectList.push_back(add);
	return NULL;
}
int			World::removeObject(int id)
{
	objectList.erase(objectList.begin() + id);
	return NULL;
}
// effect
int			World::getEffectCount()
{
	return effectList.size();
}
Effect		World::getEffect(int ID)
{
	return effectList[ID];
}
int			World::replaceEffect(Effect replace, int ID)
{
	effectList[ID] = replace;
}
int			World::addEffect(Effect add)
{
	effectList.push_back(add);
	return NULL;
}
int			World::removeEffect(int id)
{
	effectList.erase(effectList.begin() + id);
	return NULL;
}
