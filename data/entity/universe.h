#pragma once
class Universe
{
public:
	Universe(){}
	~Universe(){}

	int getGlobalInfo();
private:
	std::vector <World> worldList;
};

int Universe::getGlobalInfo()
{
	return NULL;
}
