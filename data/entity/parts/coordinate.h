#pragma once
/*
ENG
later
RU
Coordinate - êëàññ, êîòîðûé ïîçâîëÿåò îïðåäåëèòü ñóùíîñòü â ïðîñòðàíñòâå.
Ôóíêöèè:
returnCoordinateX, returnCoordinateY - âîçâðàùàþò êîîðäèíàòû.
setCoordinateX, setCoordinateY - çàìåíÿþò êîîðäèíàòû
modifyCoordinateX, modifyCoordinateY, modifyCoordinates - ïðèáàâëÿþò çíà÷åíèå ê êîîðäèíàòàì
*/
class Coordinate
{
public:
	int returnCoordinateX();
	int returnCoordinateY();
	int setCoordinateX(int set);
	int setCoordinateY(int set);
	int modifyCoordinateX(int set);
	int modifyCoordinateY(int set);
	int modifyCoordinates(int xSet, int ySet);
private:
	int
		x, y;
};
int Coordinate::returnCoordinateX()
{
	return NULL;
}
int Coordinate::returnCoordinateY()
{
	return NULL;
}
int Coordinate::setCoordinateX(int set)
{
	x = set;
	return NULL;
}
int Coordinate::setCoordinateY(int set)
{
	y = set;
	return NULL;
}
int Coordinate::modifyCoordinateX(int set)
{
	x = x + set;
	return NULL;
}
int Coordinate::modifyCoordinateY(int set)
{
	y = y + set;
	return NULL;
}
int Coordinate::modifyCoordinates(int xSet, int ySet)
{
	x = x + xSet;
	y = y + ySet;
	return NULL;
}
