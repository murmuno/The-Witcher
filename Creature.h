#include "auxFunctions.cpp"


class Creature
{
	bool isDead;

	// Movement functions
	void moveUp();
	void moveRight();
	void moveDown();
	void moveLeft();

public:
	Race race;
	Creature();
};



/////////////
// GHOUL
class Ghoul : public Creature
{
public:
	Ghoul()
	{
		this->race = GHOUL;
	};
//	~Ghoul();

};


/////////////
// HUMAN
class Human : public Creature
{
	Gender gender;
	unsigned age;
public:
	Human(): gender(randGender()), age(rand() % 60)
	{
		this->race = HUMAN;
	};
	Human(unsigned age): age(age) {};

//	~Human();

};