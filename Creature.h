class Creature
{
	
	bool isDead;

	// Movement functions
	void moveUp();
	void moveRight();
	void moveDown();
	void moveLeft();
};






class Ghoul : Creature
{
public:
	Ghoul();
//	~Ghoul();

	void attackHuman();
	void attackGhoul();
};







enum Gender 
{
    F,
    M
};

class Human : Creature
{
	Gender gender;
	unsigned age;

public:
	Human();
//	~Human();

};