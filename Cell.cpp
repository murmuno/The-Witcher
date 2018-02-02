#include "Cell.h"



void Cell::assignOccupant(Creature creature)
{
	this->occupant = creature;
}



void Cell::putHuman()
{
	this->occupant = Human();
};



void Cell::putGhoul()
{
	this->occupant = Ghoul();
};



void Cell::output()
{
	if (this->occupant.race == HUMAN)
	{
		if (this->occupant.gender == F)
		{
			if (this->occupant.age < adultAge)
			{
				printf("f");
			}
			else
			{
				printf("F");
			}
		}
		else
		{
			if (this->occupant.age < adultAge)
			{
				printf("m");
			}
			else
			{
				printf("M");
			}
		}	
	}
	else
	{
		printf("G");
	}
};