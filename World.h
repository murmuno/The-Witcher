#include "Cell.cpp"



class World
{
	std::vector< std::vector<Cell> > map;
	int rows, columns;

public:
	World(unsigned rows, unsigned columns):
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
//	~World();

	void initialPositions(unsigned, unsigned);
	void updateOutput();
	void updateWorld();
	void checkRight(unsigned row, unsigned column);
	void checkLeft(unsigned row, unsigned column);
};