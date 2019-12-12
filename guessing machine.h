#include <iostream>
#include <time.h>
#include <string.h>
class guessMach
{
	
public:

bool guessComp();
int guessHigher(std::string higher, int maxGuess,int currentGuess);
int guesslower(std::string lower, int minGuess,int currentGuess);
int firstGuess(int maxRange);

private:
int firstGuessReturn;
	
};

int guessMach::firstGuess(int maxRange)
{

	srand(time(NULL));
	firstGuessReturn = rand() %maxRange;
	return firstGuessReturn;
	
}

int guessMach::guessHigher(std::string higher, int maxGuess, int currentGuess)
{
	int newGuess;
	std::string stringcheck = "you are too low\n";
	if(strcmp(higher,stringcheck) != 0)
	{
	srand(time(NULL));
	newGuess = rand() %currentGuess + maxGuess;
	return newGuess;
	}
}

int guessMach::guesslower(std::string lower, int minGuess,int currentGuess)
{
	int newGuess;
	std::string stringcheck = "you are too high\n";
	if(strcmp(lower,stringcheck) == 0)
	{
	srand(time(NULL));
	newGuess = rand() %minGuess + currentGuess;	
	return newGuess;
	}
}
