#include <iostream>
#include <fstream>

int main()
{
	int number;
	int sum = 0;
	int testscore;
	int average;
	
	while (true)
	{
		std::cout << "How many students are in the class? ";
		std::cin >> number;
		
		if (1 <= number && number <= 25)
		{
			break;
		}
		
		std::cout << "The number of students must be in the range 1 - 25." << std::endl << std::endl;
	
		std::cin.clear();
		std::cin.ignore(std::streamsize("streamsize"), '\n');
	}
	
	std::cout << std::endl;
		
	for (int i = 1; i <= number; i++)
	{
		while (true)
		{
			std::cout << "Enter the score for student " << i << ": ";
			std::cin >> testscore;
		
			if (!(std::cin.fail()) && (0 <= testscore && testscore <= 100)) 
			{
				break;
			} 
			
			std::cout << "The test score must be between 0 and 100." << std::endl;
	
			std::cin.clear();
			std::cin.ignore(std::streamsize("streamsize"), '\n');
		}
		
		sum += testscore;
	}
	
	std::cout << std::endl;
	
	average = sum / number;
	
	std::cout << "The average is " << average << std::endl;
} 
