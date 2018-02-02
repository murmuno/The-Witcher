// Clears the screen to eventually create a visibility
// of animation
void clearScreen()
{
	system("clear");
}


// Check if some condition with simple probability is a success
// E.g.: outOf(5) should give true with probability 1/5
bool isSuccess(unsigned outOf)
{
	if ((rand() % outOf) == 0)
	{	return true;	}
	else
	{	return false;	}
}



const unsigned adultAge = 20;



enum Gender 
{
    F,
    M
};

enum Race 
{
    HUMAN,
    GHOUL
};



Gender randGender()
{
	if (isSuccess(2))
		{
			return F;
		}
	else
		{
			return M;
		}
}