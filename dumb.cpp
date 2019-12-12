#include <iostream>
#include <stdio.h>
#include "dice.h"
#include <string>


dice roll;

bool check = false;
int userInput;
int randomNumber = roll.RandomGuess();
int minimum;
int maximum;
std::string tooLow = "you are too low\n";
std::string tooHigh = "you are too high\n";
int main()



{
std::cout << "please insert the minimum " << std::endl; 
std::cin >> minimum;
std::cout << "please insert the maximum" << std::endl;
std::cin >> maximum;

while(check)
{
	std::cout << "guess the number between " << minimum << " and " << maximum << std::endl;

	std::cout << randomNumber << std::endl;
	
	if(userInput < randomNumber)
	{
	std::cout << tooLow;
	
	}
	
	else if(userInput > randomNumber)
	{
	std::cout << tooHigh;
	}
	
	if(userInput == randomNumber)
	{
	std::cout << "you guessed the number" << std::endl;
	check = true;	
	}
	
	if(check == true)
	{
	std::cout << "you made it" << std::endl;	
	return 0;
	}
	/*
	if(GetAsyncKey(VK_F1) &0x70)
	{
	std::cout << "you gave up better luck next time" << std::endl;	
	return 0;
	}
	*/ 
}	
	
return 0;	
}
