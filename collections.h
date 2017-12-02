#pragma once

class Collection
{
public:

private:


};

class CollectionCreature:
	private Collection
{
public:
	int getCreatureCount();
	int addCreature(Creature thisCreature);
	int removeCreature(int ID);
	int replaceCreature(int ID, Creature thisCreature);
private:
	std::vector <Creature> creatureCollection;
};
int CollectionCreature::getCreatureCount()
{
	return creatureCollection.size();
}
int CollectionCreature::addCreature(Creature thisCreature)
{
	creatureCollection.push_back(thisCreature);
	return NULL;
}
int CollectionCreature::removeCreature(int ID)
{
	if (ID >= creatureCollection.size())
		return -1;

	creatureCollection.erase(creatureCollection.begin() + ID);
	return NULL;
}
int CollectionCreature::replaceCreature(int ID, Creature thisCreature)
{
	if (ID >= creatureCollection.size())
		return -1;

	creatureCollection[ID] = thisCreature;
	return NULL;
}

class CollectionItem:
	private Collection
{
public:
	int getItemCount();
	int addItem(Item thisItem);
	int removeItem(int ID);
	int replaceItem(int ID, Item thisItem);
private:
	std::vector <Item> itemCollection;
};
int CollectionItem::getItemCount()
{
	return itemCollection.size();
}
int CollectionItem::addItem(Item thisItem)
{
	itemCollection.push_back(thisItem);
	return NULL;
}
int CollectionItem::removeItem(int ID)
{
	if (ID >= itemCollection.size())
		return -1;

	itemCollection.erase(itemCollection.begin() + ID);
	return NULL;
}
int CollectionItem::replaceItem(int ID, Item thisItem)
{
	if (ID >= itemCollection.size())
		return -1;

	itemCollection[ID] = thisItem;
	return NULL;
}

class CollectionObject:
	private Collection
{
public:
	int getObjectCount();
	int addObject(Object thisObject);
	int removeObject(int ID);
	int replaceObject(int ID, Object thisObject);
private:
	std::vector <Object> objectCollection;
};
int CollectionObject::getObjectCount()
{
	return objectCollection.size();
}
int CollectionObject::addObject(Object thisObject)
{
	objectCollection.push_back(thisObject);
	return NULL;
}
int CollectionObject::removeObject(int ID)
{
	if (ID >= objectCollection.size())
		return -1;

	objectCollection.erase(objectCollection.begin() + ID);
	return NULL;
}
int CollectionObject::replaceObject(int ID, Object thisObject)
{
	if (ID >= objectCollection.size())
		return -1;

	objectCollection[ID] = thisObject;
	return NULL;
}

class CollectionMap :
	private Collection
{
public:
private:

};

class CollectionWorld :
	private Collection
{
	friend Universe;
public:
	int getWorldCount();
	int addWorld(World thisWorld);
	int removeWorld(int ID);
	int replaceWorld(int ID, World thisWorld);
private:
	std::vector <World> worldCollection;
};
int CollectionWorld::getWorldCount()
{
	return worldCollection.size();
}
int CollectionWorld::addWorld(World thisWorld)
{
	worldCollection.push_back(thisWorld);
	return NULL;
}
int CollectionWorld::removeWorld(int ID)
{
	if (ID >= worldCollection.size())
		return -1;

	worldCollection.erase(worldCollection.begin() + ID);
	return NULL;
}
int CollectionWorld::replaceWorld(int ID, World thisWorld)
{
	if (ID >= worldCollection.size())
		return -1;

	worldCollection[ID] = thisWorld;
	return NULL;
}