/*
This program opens the file user created in program 2, computes the average of all the scores, then this play the average to the user.

This program prompt user to enter a name of file.
Then it checks if this file inputed exists.
If it doesn't exist, the program displays an error message then exits.
If it exist, the program displays each score in the file, computes the average, then display this average to the user.

*/

#include <iostream> // Handles I/O Operations
#include <fstream> // Included for file handling operations

int main()
{
	// Name of file the user wants to open
	std::string filename;
	
	// Prompt user for the file
	std::cout << "Input the file name: ";
	std::cin >> filename;
	std::cout << std::endl;
	
	// Opens the the input file
	std::ifstream file(filename.c_str());
	
	// Check if file does not exist
	if (!file.is_open())
	{
		// Display an error message and exit
		std::cout << "The file cannot be opened. Check the filename and run the " << std::endl;
		std::cout << "program again. Bye!" << std::endl;
		
		return 0;
	}
	
	// Each score in the input file
	int number;
	
	// Keeps track of the number of scores in the input file
	int count = 0;
	
	// Keeps track of the running sum of scores in the input file
	int sum = 0;
	
	// Display a text
	std::cout << "The test scores in the file are" << std::endl;
	
	// Continues looping till the end of file
	while (file >> number)
	{
		// Display the score to the user
		std::cout << number << " ";
		
		// Add the score to the running sum
		sum += number;
		
		// Increment the number of scores seen by 1
		count++;
	}
	
	// Compute the average of the scores in the input file
	float average = sum / static_cast<float>(count);

	// Display the average to the user
	std::cout << "The average is " << average << std::endl;
}
