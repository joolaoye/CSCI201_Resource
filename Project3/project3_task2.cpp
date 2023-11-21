/*
This program prompts user to enter a list of test scores into a file.

Program prompts user to enter a name for the file.
Program then prompts user to enter a number.   
If the user enters a number not in the range of 0 ~ 100, the program reprompt the user.
The program keeps prompting user for input until user hits "Ctrl + d".  
The program then display a message on how to access the file. 

Name: Joshua O Olaoye
StarID: fg2784fh
Section Number: 03  
*/

#include <iostream> // Handles I/O operations
#include <fstream> // Included for file handling operations

int main(){
		// User's file name 
		std::string filename;
		
		// Prompt user to enter file name
		std::cout << "What is the filename to store the students' scores? " << std::endl;
		std::cin >> filename;
	
		// Create a file object with user's file name
		std::ofstream file(filename.c_str());
		
		// User's input to file
		int number;
		
		// Display prompt message
		std::cout << "Enter a score: ";
		
		// Continue looping till user hit Ctrl + d
		while (std::cin >> number)
		{		
			// Continue looping till user enters a number in the range 0 ~ 100
			while (number < 0 || number > 100)
			{
				// Display an error message to the user
				std::cout << "Invalid score. A score must be between 0 to 100." << std::endl;
				
				// Reprompt user for input
				std::cout << "Enter a score: ";
				std::cin >> number;
				
			}
			
			// Write user input to the file
			file << number << std::endl;
			
			// Display prompt message 
			std::cout << "Enter a score: ";
		}
		
		// Display Ctrl + d to signify the user that loop has ended
		std::cout << "Ctrl+d" << std::endl << std::endl;
		
		// Display a message on how the user can access the file they created
		std::cout << "A list of student scores have been saved into the file " << std::endl;
		std::cout << '"' << filename <<  "\". Please open the file to check it." << std::endl;		
}
