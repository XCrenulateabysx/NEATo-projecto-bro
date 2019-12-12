#include <ctime>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
class dice

{
public:

	int RandomDice();
	int RandomGuess();
};


int dice::RandomDice()
{
		int num;
		srand(time(NULL));
		
		num = rand() %9;
		return num;
		
}

int dice::RandomGuess()
{
		int GuessingNumber;
		srand(5);
		
		GuessingNumber = rand() %5000;
		return GuessingNumber;
	
}
