class Cell
{
	friend class World;
	Creature occupant;
public:
	Cell();
//	~Cell();

	void assignOccupant(Creature);

	void putHuman();
	void putGhoul();

	void output();
};