#pragma once
/*
ENG
later
RU
Coordinate - класс, который позвол€ет определить сущность в пространстве.
‘ункции:
returnCoordinateX, returnCoordinateY - возвращают координаты.
setCoordinateX, setCoordinateY - замен€ют координаты
modifyCoordinateX, modifyCoordinateY, modifyCoordinates - прибавл€ют значение к координатам
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