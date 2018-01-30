#include <iostream>
#include <map>
#include <vector>

#include "Creature.h"
#include "World.h"

#include "auxFunctions.cpp"

//////////////////////
// FORWARD DECLARATIONS
//
// CREATURES: all declared in Creature.h
class Creature;
class Human;	// subclass of Creature
class Ghoul;	// subclass of Creature
//
// CELL: declared in Cell.h, #included in World.h
class Cell;
//
// WORLD: declared in World.h
class World;

//////////////////////
// DRIVER
//
int main()
{
	// Input the size of the World.
	std::cout << "Enter the size of the world in the format ";
	std::cout << (char)34; // 34 = ASCII code for double quote
	std::cout << "(number of rows) (number of columns)";
	std::cout << (char)34 << ": ";
	unsigned rows, columns;
	std::cin >> rows >> columns;
	while (std::cin.fail())
	{
    	std::cout << "Incorrect format! Please try again: ";
    	std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> rows >> columns;
	}

	// Input initial numbers.
	unsigned maxNum = rows*columns/2;
	unsigned humans, ghouls;
	std::cout << "Enter the initial number of humans (not more than ";
	std::cout << maxNum << "): ";
	std::cin >> humans;
	while (std::cin.fail() || humans > maxNum)
	{
    	std::cout << "Bad input! Please try again: ";
    	std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> humans;
	}

	std::cout << "Enter the initial number of ghouls (not more than ";
	std::cout << maxNum << "): ";
	std::cin >> ghouls;
	while (std::cin.fail() || ghouls > maxNum)
	{
    	std::cout << "Bad input! Please try again: ";
    	std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> ghouls;
	}

	//Creating the World
	std::cout << "Creating the world of size ";
	std::cout << rows << 'x' << columns << "...";
	World(rows, columns, humans, ghouls);
	std::cout << " Done.\n";




	return 0;
}