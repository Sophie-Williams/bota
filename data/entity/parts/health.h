#pragma once
// TODO: health.h
/*
ENG
later
RU
Health - êëàññ, êîòîðûé õðàíèò â ñåáå ïàðàìåòðû çäîðîâüÿ.
Åñòü äâà ïàðàìåòðà, òåêóùåå çäîðîâüå è ìàêñèìàëüíîå.

*/
class Health
{
public:
	int returnHealth();
	int returnHealthMax();
	int setHealth(int set);
	int setHealthMax(int set);
	int modifyHealth(int mod);
	int modifyHealthMax(int mod);
private:

	int
		healthMax,
		health;
};
int Health::returnHealth()
{
	return health;
}
int Health::returnHealthMax()
{
	return healthMax;
}
int Health::setHealth(int set)
{
	health = set;
	return NULL;
}
int Health::setHealthMax(int set)
{
	healthMax = set;
	return NULL;
}
int Health::modifyHealth(int mod)
{
	health = health + mod;
	return NULL;
}
int Health::modifyHealthMax(int mod)
{
	healthMax = healthMax + mod;
	return NULL;
}
