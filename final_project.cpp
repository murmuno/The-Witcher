#include <iostream>
#include <map>
#include <vector>

/*

Начать писать программу

1)	Классы неписей:
	-	коммонеры
	-	вампиры
	-	(ведьмак)

2)	Вначале смоделировать без картинки (можно просто выводить статистику)
3)	Нужно разбить всё на минимальные куски и записать всё на бумажку или в beagle-learning 

At the end:
class World;
two-dim vector of cell-type objects,
iterator that goew over the cells and checks how it iterates with the surroundings 

Nice output:
	In terminal:
		sleep(some number of milliseconds);
		system("clear"); -- creates a new window, then can print on top

*/




//////////////////////
// AUXILIARY FUNCTIONS NOT RELATED TO CLASSES

/* This function clears screen. I don't understand how it works,
but I found the code in the Internet and happy to have it. */
void ClearScreen()
{
	system("clear");
}


enum Gender 
{
    F,
    M
};

enum Age
{
    YOUNG,
    ADULT
};



//////////////////////
// INTRODUCING CLASSES

class Position;
class Creature;


struct Position
{
	int x,y;
};




class Creature
{
	Position position;

	// Movement functions
	Position moveUp();
	Position moveRight();
	Position moveDown();
	Position moveLeft();
};

// class Human -- subclass of Creature
class Human : Creature
{
	Gender gender;
	Age age;
};


// class Ghoul -- subclass of Creature
class Ghoul : Creature
{

	void fightWithHuman();
	void fightWithGhoul();
};

// WORLD

class Cell
{

};

class World
{
	std::vector< std::vector<Cell> > map;
	int rows, columns;

public:
	// Constructor
	World(int rows, int columns):
		rows(rows), columns(columns)
		{
			for (int i = 0; i < rows; i++)
			{
				this->map.push_back(std::vector<Cell>());
				for (int j = 0; j < columns; j++)
				{
					this->map[i].push_back(Cell());
				}
			}
		};
};



//////////////////////
// DRIVER

int main()
{
	// Input the size of the World.
	std::cout << "Enter the size of the world in the format ";
	std::cout << (char)34; // 34 = ASCII code for double quote
	std::cout << "(number of rows) (number of columns)";
	std::cout << (char)34 << ": ";
	int rows, columns;
	std::cin >> rows >> columns;
	while (std::cin.fail())
	{
    	std::cout << "Incorrect format! Please try again: ";
    	std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> rows >> columns;
	}

	//Creating the World
	std::cout << "Creating the world of size ";
	std::cout << rows << 'x' << columns << "...";
	World(rows, columns);
	std::cout << " Done.\n";




	return 0;
}