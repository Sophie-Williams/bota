#pragma once

struct OFDPoints
{
	int
		pointsPrimary, pointsSecondary;
};

struct OFDGroup
{
	OFDPoints offence;
	OFDPoints defence;
};

class OFDAbility
{
public:
	
private:
	OFDGroup ofd;
};
