/*
This program generates a random number in the range of 0 - 100 and asks the user to guess what the number is.  
If the user’s guess is higher than the random number, the program displays “Too high, try again.”
If the user’s guess is lower than the random number, the program displays “Too low, try again.”   
When the user correctly guesses the random number, the program displays the number of guesses. 

*/

#include <iostream> // Handles I/O operations
#include <cstdlib> // Need for srand() and rand() functions
#include <ctime> // Needed for the time() function

int main(){
		// The number of seconds since the start of the UNIX Epoch (Janaury 1, 1970) 
		int current_time = time(NULL);
		
		// Seeds the random number generator for different output for each time the program is executed
		srand(current_time);
		
		// Generate a random number from 1 through 100
		int random_number = (rand() % 100) + 1;
		
		// User's guess
		int user_input;
		
		// Prompt user for their guess
		std::cout << "Let's start this game. Please guess a number between 0 ~ 100. " << std::endl;
		std::cout << "your guess? ";
		std::cin >> user_input;
		
		// Keeps track of the number of guesses user has made
		int guesses = 1;
		
		// Keep looping till user enters the correct guess
		while (user_input != random_number)
		{
				// Check if user guess is higher than the random number				
				if (user_input > random_number)
				{
					// Display the appropriate message then reprompt user for guess
					std::cout << "Too high, try again. your guess? ";
					std::cin >> user_input; 
				}
				
				// Check if user guess is lower than the random number
				else
				{
					// Display the appropriate message then reprompt user for guess
					std::cout << "Too low, try again. your guess? ";
					std::cin >> user_input; 
				}
				
				// Increase guesses user has made by 1
				guesses++;
		}
		
		// Display a message after user enters correct guess
		std::cout << std::endl;
		std::cout << "You got it! The answer is " << random_number << "." << std::endl;
		std::cout << "The number of times you tried is " << guesses << "." << std::endl;
		std::cout << "Thanks for playing this game." << std::endl;
}
