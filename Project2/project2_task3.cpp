/*
Math Tutor
Name: Joshua O Olaoye
starID: ********
Section Number: 03

Description:
This program simulates a math tutor for a young student
It presents menu options for addition, subtraction, multiplication, division, as well as quitting the program
The user is prompted to select an option by inputting a number that maps to that option
If the user input is not a valid option, the program displays a friendly error message and reprompts the user till the user conforms or kills the program
If the user enters a valid option that doesn't map to quit, the program generates a math problem from randomly generated numbers and displays it to the user
The program then prompts user once again, this time for their solution to math problem
The program checks if user attempt is correct or wrong, and displays a message accordingly
The program repeats the menu loop (from 2 - 7) until the user inputs 5
*/

#include <iostream> // Handles I/O opertaions
#include <iomanip> // Provides right, setw(), setfill I used for formatting the output field
#include <cstdlib> // Provides the srand() and rand() used for generating the random numbers
#include <ctime> // Provides time(), I used to get the current time

int main()
{
	// The number of seconds since the start of the UNIX Epoch (Janaury 1, 1970)
	int current_time = time(NULL);
	
	// Seeds the random number generator for different output for each time the program is executed
	srand(current_time);
	
	// User's Choice for the menu
	int choice;	
	
	// Outer loop, continues to loop until user selects 5 (Quit)
	while (true)
	{
		// Display the Menu
		std::cout << "Math Tutor Menu" << std::endl;
		std::cout << "------------------------------" << std::endl;
		std::cout << "1. Addition problem" << std::endl;
		std::cout << "2. Subtraction problem" << std::endl;
		std::cout << "3. Multiplication problem" << std::endl;
		std::cout << "4. Division problem" << std::endl;
		std::cout << "5. Quit this program" << std::endl;
		std::cout << "------------------------------" << std::endl;
	
		// Prompt user for their choice
		std::cout << "Enter your choice (1-5): ";
		std::cin >> choice;			
		
		// Print a new line
		std::cout << std::endl;

		if (1 <= choice && choice <= 5)
		{
			// Variables that stores the random numbers generated
			int first_number,second_number;
						
			// Result of the Math problem
			int res;
	
			// User's answer
			int user_result;
			
			// Declared the above variables in this scope for subtle optimization
	
			// If user selected option 1 (Addition)
			if (choice == 1)
			{
				// Generate to random numbers from 1 through 500	
				first_number = (rand() % 500) + 1;
				second_number = (rand() % 500) + 1;
		
				// Compute their sum and assign the value to res
				res = first_number + second_number;
		              
				// Display the Math problem to the user                 
				std::cout << std::right << std::setw(6) << std::setfill(' ') << first_number << std::endl;
				std::cout << "+" << std::right << std::setw(5) << std::setfill(' ') << second_number << std::endl;
				std::cout << std::right << std::setw(6) << std::setfill('-') << "-" << std::endl;		
			}
	
			// If user selected option 2 (Subtraction)
			else if (choice == 2)
			{
				// Generate two random numbers from 1 through 500
				first_number = (rand() % 500) + 1;
				second_number = (rand() % 500) + 1;
		
				// Ensure the second number is less than the first
				while (!(second_number < first_number)) 
					second_number = (rand() % 500) + 1;

				// Compute their difference and assign the value to res
				res = first_number - second_number;
				               
				// Display the Math problem to the user		               
				std::cout << std::right << std::setw(6) << std::setfill(' ') << first_number << std::endl;
				std::cout << "-" << std::right << std::setw(5) << std::setfill(' ') << second_number << std::endl;
				std::cout << std::right << std::setw(6) << std::setfill('-') << "-" << std::endl;		
	
			}
	
			// If user selected option 3 (Multiplication)
			else if (choice == 3)
			{
				// Generate a random number from 1 through 100
				first_number = (rand() % 100) + 1;
		
				// Generate another random number from 1 through 9
				second_number = (rand() % 9) + 1;
		
				// Compute their product and assign the value to res
				res = first_number * second_number;
		
				// Display the Math Problem to the user		                 
				std::cout << std::right << std::setw(6) << std::setfill(' ') << first_number << std::endl;
				std::cout << "×" << std::right << std::setw(5) << std::setfill(' ') << second_number << std::endl;
				std::cout << std::right << std::setw(6) << std::setfill('-') << "-" << std::endl;		
			}
	
			// If user selected option 4 (Division)
			else if (choice == 4)
			{
				// Generate a random from 1 through 9. This would be the divisor
				second_number = (rand() % 9) + 1;
		
				// Generate another random number from 1 through 9 which is divisible by the divisor. This will be the dividend
				first_number = second_number * ((rand()% 50) + 1);
		
				// Compute the division and assign the value to res
				res = first_number / second_number;
		
				// Display the Math Problem to the user
				std::cout << first_number << " / " << second_number << " = " << std::endl;		

			}
	
			// If user selected option 5 (Quit)
			else 
			{
				// Display an exit message
				std::cout << "Thank you for using Math Tutor." << std::endl;
		
				// Exit the program
				return 0;
	
			}
	
			// Prompt user for their solution
			std::cout << std::endl;
			std::cout << "Enter your answer: ";
			std::cin >> user_result;
			
			// Check if user's answer is correct, display a message accordingly
			if (user_result == res)
			{
				std::cout << "Congratulations! That's right." << std::endl << std::endl;
			}
			else
			{
				std::cout << "Sorry, the correct answer is " << res << "." << std::endl << std::endl;
			}
		}
		
		else
		{					
			std::cout << "Error: Invalid input." << std::endl << std::endl;			
		}
				
		// Get rid of any error flags, incase user input an invalid data type
		std::cin.clear();
		
		// Clear input buffer, incase user input an invalid data type
		std::cin.ignore(std::streamsize("streamsize"), '\n');
	}
}
