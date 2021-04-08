//This code is made by Dominik Sliwinski and is under the GNU GPL v2 license

#include <iostream>

namespace apt
{

	bool contains(int* array, int number, int length)
	{
		for(int i = 0; i < length; i++)
		{
			if(array[i] == number)
			{
				return true;
			}
		}
		return false;
	}

}


int main()
{
	int numbers[7];
	int input[7];
	int inputemp;

	int count = 0;
	
	std::cout << "Enter 7 numbers from 1 to 25, 7 numbers will be chosen at random, let's see how many can you hit!\n";
	
	while(count < 7)
	{
		std::cin >> inputemp;
		
		bool isthere = apt::contains(input, inputemp, 7);
		
		if(inputemp > 0 && inputemp < 26 && !isthere)
		{
			input[count] = inputemp;
			count++;
		}
	}

	std::cout << "\n\nYour numbers:\n";

	for(int i = 0; i < 7; i++)
	{
		std::cout << input[i] << std::endl;	
	}

	srand(time(NULL));

	count = 0;
	int randomized_var = 0;

	while(count < 7)
	{
		randomized_var = rand() % 25 + 1;
		
		bool isthere = apt::contains(numbers, randomized_var, 7);
		
		if(!isthere)
		{
			numbers[count] = randomized_var;
			count++;
		}	
	}

	std::cout << "\nRandomly generated numbers:\n";
	
	for(int i = 0; i < 7; i++)
	{
		std::cout << numbers[i] << std::endl;	
	}
	
	std::cout << "\nWhat you hit:\n";
	
	int howmany = 0;
	
	for(int i = 0; i < 7; i++)
	{
		bool isthere = apt::contains(numbers, input[i], 7);
		
		if(isthere)
		{
			std::cout << input[i] << std::endl;
			howmany++;
		}
	}

	std::cout << "\nYour score: " << howmany << "/7, ";
	
	//yes I know what is a switch-case statement
	
	if(howmany == 0)
	{
		std::cout << "aw... better luck next time!\n";
	}
	else if(howmany == 1)
	{
		std::cout << "at least... something.\n";
	}
	else if(howmany == 2)
	{
		std::cout << "could have been a lot better...\n";
	}
	else if(howmany == 3)
	{
		std::cout << "woah, kinda like a half!\n";
	}
	else if(howmany == 4)
	{
		std::cout << "that was amazing luck!\n";
	}
	else if(howmany == 5)
	{
		std::cout << "you are REALLY lucky my man.\n";
	}
	else if(howmany == 6)
	{
		std::cout << "THAT WAS SO CLOSE TO PERFECTION!\n";
	}
	else
	{
		std::cout << "WOAH THAT IS A PERFECT SCORE, YOU'RE AMAZINGLY LUCKY! CONGRATS!\n";
	}

	return 0;
}
