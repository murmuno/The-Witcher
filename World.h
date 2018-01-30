#include "Cell.h"

class World
{
	std::vector< std::vector<Cell> > map;
	int rows, columns;

public:
	// Constructor
	World(int rows, int columns):
		rows(rows), columns(columns)
		{
			for (int i = 0; i < rows; ++i)
			{
				this->map.push_back(std::vector<Cell>());
				for (int j = 0; j < columns; ++j)
				{
					this->map[i].push_back(Cell());
				}
			}
		};
};