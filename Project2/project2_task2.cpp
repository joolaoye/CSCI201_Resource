/*
Math Tutor Program
Name: Joshua O Olaoye
starID: ********
Section Number: 03

Description:
This program simulates a math tutor for a young student
The program generates two random numbers from 1 through 500
The program then computes the sum of the two random numbers
Displays the Math problem to the user
Prompts the user for their solution to the Math problem
Checks against the sum calculated earlier and tells the user if they were correct or not
*/

#include <iostream> // Handles I/O operations
#include <iomanip> // Provies right, setw(), setfill() I used for formatting the output field
#include <cstdlib> // Provides srand() and rand() needed to generate the random numbers
#include <ctime> // Provides time() used for getting the current time

int main(){
	// The number of seconds since the start of the UNIX Epoch (Janaury 1, 1970)
	int current_time = time(NULL);
			
	// Seeds the random number generator for different output for each time the program is executed
	srand(current_time);
	                         	
	// Generate two random numbers from 1 through 500
	int first_number = rand() % 501;
	int second_number = rand() % 501;
	
	// Compute the sum of the two randomly generated numbers
	int sum = first_number + second_number;	
	
	// Display the Math problem to the user
	std::cout << std::right << std::setw(6) << std::setfill(' ') << first_number << std::endl;
	std::cout << "+" << std::right << std::setw(5) << std::setfill(' ') << second_number << std::endl;
	std::cout << std::right << std::setw(6) << std::setfill('-') << "-" << std::endl;
	
	// Print a new line after the Math problem
	std::cout << std::endl;
	
	// User's answer to the Math problem
	int user_result;
	
	// Prompts user for their answer to the Math problem
	std::cout << "Enter your answer: ";
	std::cin >> user_result;
	
	// Check if user entered the correct answer and display a message accordingly
	if (user_result == sum)
	{
		std::cout << "Congratulations! That's the correct answer." << std::endl;
	}
	else
	{
		std::cout << "Sorry. The correct answer is " << sum << "." << std::endl;
	} 
}
