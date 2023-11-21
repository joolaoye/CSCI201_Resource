#include <iostream>
#include <fstream>

int main()
{
	int number;
	int sum = 0;
	int testscore;
	int average;
	std::ofstream file("studentScores.dat");
	
	if (!file.is_open())
	{
		std::cout << "Something went wrong." << std::endl;
		return 1;
	}
	
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
		
		file << testscore << std::endl;
		
		sum += testscore;		
	}
	
	std::cout << std::endl;
	
	average = sum / number;
	
	file << average << std::endl;
	
	file.close();
	
	std::cout <<" A list of student scores and the average have been saved into the file \"studentScores.dat\". Please open the file to check it." << std::endl;	
} 
