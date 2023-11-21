/*
Math Tutor Program
Name: Joshua O Olaoye
starID: ********
Section Number: 03

Description:
This program simulates a math tutor for a young student.
The program generates two random numbers from 1 through 500.
Displays a message on how to use the program along with a Math problem to the user
Waits for user to input ENTER
Computes the sum of the two randomly generated numbers
Then displays this sum to the user

*/
#include <iostream> // Handles I/O operations
#include <iomanip> // Needed for right, setw(), setfill() used for formatting the output field
#include <time.h> // Needed for the time() function
#include <cstdlib> // Need for srand() and rand() functions
                                   
int main(){
	// The number of seconds since the start of the UNIX Epoch (Janaury 1, 1970) 
	int current_time = time(NULL);

	// Seeds the random number generator for different output for each time the program is executed
	srand(current_time);

	// Declaring variables
	int first_number,second_number, sum;
	char input;
	
	// Generate a random number from 1 through 500
	first_number = (rand() % 500) + 1;
	
	// Generate another random number from 1 through 500
	second_number = (rand() % 500) + 1;
	
	// Displays a message on how to use the program along with the maths problem
	std::cout << "Press enter when you are ready to see the answer." << std::endl;
	std::cout << std::right << std::setw(6) << std::setfill(' ') << first_number << std::endl;
	std::cout << "+" << std::right << std::setw(5) << std::setfill(' ') << second_number << std::endl;
	std::cout << std::right << std::setw(6) << std::setfill('-') << "-" << " ";
	
	// Wait for user input (ENTER)
	std::cin.get(input);
	
	// Compute the sum of both numbers
	sum = first_number + second_number;
	
	// Display the sum of both numbers
	std::cout << std::right << std::setw(6) << std::setfill(' ') << sum << std::endl;
	
}
