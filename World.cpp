#include "World.h"



void World::initialPositions(unsigned humans, unsigned ghouls)
{
	auto currRow = (this->map).begin();
	auto temp = currRow->begin();

	for (int i = 0; i < humans; ++i)
	{
		temp->putHuman();
		if (std::next(temp,1) != currRow->end())
		{
			temp = std::next(temp,1);
		}
		else
		{
			currRow = std::next(currRow,1);
			temp = currRow->begin();
		}
	}

	currRow = (this->map).rbegin();
	temp = currRow->rbegin();

	for (int i = 0; i < humans; ++i)
	{
		temp->putGhoul();
		if (std::next(temp,1) != currRow->end())
		{
			temp = std::next(temp,1);
		}
		else
		{
			currRow = std::next(currRow,1);
			temp = currRow->rbegin();
		}
	}
};



void World::updateOutput()
{
	clearScreen();

	auto currRow = (this->map).begin();
	auto temp = currRow->begin();
	do
	{
		do
		{
			temp->Cell::output();
		}
		while (std::next(temp, 1) != currRow->end());
		printf("\n");
	}
	while (std::next(currRow, 1) != (this->map).end());
};



void World::checkRight(unsigned row, unsigned column)
{
	if (std::next(this->map[i][j], 1) != this->map[i]->end())
	{

	}
};
