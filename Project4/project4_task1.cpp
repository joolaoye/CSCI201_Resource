/*
Pay roll System.
 
The program asks the user to enter an employee’s ID, hours worked and hourly pay rate. 
The program calculates the gross wage for that employee by computing the product of hours worked and hourly pay. 
The program writes the employee’s information (ID, hours worked, hourly pay rate, gross wage) to an output file. 
The program asks the user if they want to calculate the gross wage for another employee. It only responds to input ‘y’ or ‘n’. 
If the user enters ‘n’, the program displays a message on how to access the file where the employee’s data are then exit. 
Else if user enters ‘y’, the program repeats the steps that precede the decision point.  
Else the program exits abruptly.

Name: Joshua O Olaoye
StarID: ********
Section Number: 03
*/

#include <iostream> // Included for I/O operations
#include <iomanip> // Included for formatting the output 
#include <fstream> // Included for file handling operations

// Function Prototypes
void getEmployeeInfor(int& employee_id, double& pay_rate, double& hours_worked);
double calcWage(double pay_rate, double hours_worked);
void printWages(std::ofstream& outFile, int employee_id, double pay_rate, double hours_worked, double wage);

int main()
{	 
	int id; // Employee's ID
	double pay; // Employee's hourly pay rate
	double hours; // Employee's hours worked
	double gross_wage; // Employee's gross_wage
	
	std::ofstream file("employeeWages.dat"); // Creates and open a new output file "employeeWages.dat"
	
	// User response (y/n) for if they want to calculate another employee’s wage
	char user_response;

	// Display header row
	file << std::right << std::setw(10) << std::setfill(' ');
	file << "ID";
	file << std::right << std::setw(15) << std::setfill(' ');
	file << "Hourly Rate";
	file << std::right << std::setw(10) << std::setfill(' ');
	file << "Hours";
	file << std::right << std::setw(15) << std::setfill(' ');
	file << "Wage";
	
	// End header row
	file << std::endl;
	
	// Display the separator line
	file << std::right << std::setw(50) << std::setfill('-');
	file << "-";
	
	// End seperator line
	file << std::endl;

	// Loop to keep calculating employee wages until the user ends the program
	while (true)
	{	
		// Get the employee’s ID, hours worked and hourly pay rate
		getEmployeeInfor(id, pay, hours);
		
		// Calculate the employee's wage
		gross_wage = calcWage(pay, hours);
		
		// Write the employees information to the output file 
		printWages(file, id, pay, hours, gross_wage);

		std::cout << std::endl;
		
		// Prompt user if they want to calculate another employee's gross wage
		std::cout << "Do you want to calculate another employee's gross wage? ";
		std::cin >> user_response;

		std::cout << std::endl;

		// Check if the user responded with 'n' to exit the loop
		if (user_response == 'n')
		{
				// Exit the loop
				break;
		}

		// Check if the user responded with anything other than 'y' or 'n'
		else if (user_response != 'y')
		{
				// Close the file
				file.close();
				
				// Exit the program with an error code indicating abnormal termination
				return 1;
		}
	}
	
	// Close the file
	file.close();

	// Display to the user where to access the employee's information
	std::cout << "The result is reported to the file \"employeeWages.dat\"" << std::endl;
}

/** Gets an employee's id, hourly pay rate, and hours worked from the user.
* @Pre: The memory addresses of the employee's id, hourly pay rate, and hours worked.
* @Post: Updates the values at these input memory addresses */
void getEmployeeInfor(int& employee_id, double& pay_rate, double& hours_worked)
{	
	std::cout << "Enter an employee's information by the order of ID number, rate," << std::endl;
	std::cout << "hours: " << std::endl;

	while (true)
	{
		std::cin >> employee_id;
		std::cin >> pay_rate;
		std::cin >> hours_worked;

		if (employee_id > 0 && pay_rate > 0 && hours_worked > 0)
		{
				break;
		}

		std::cout << "You must enter a non negative value. Try again!" << std::endl;
	}
}

/** Calculates the gross wage of an employee.
* @Pre: The employee's hourly pay rate, and hours worked.
* @Post: Returns the gross wage of the employee */
double calcWage(double pay_rate, double hours_worked)
{
	
    return pay_rate * hours_worked;
}

/** Writes an employee information to an output file.
* @Pre: The output file, employee's id, hourly pay rate, hours worked and gross wage.
* @Post: Writes that employee information at the current row of the output file */
void printWages(std::ofstream& outFile, int employee_id, double pay_rate, double hours_worked, double wage)
{
	outFile << std::right << std::setw(10) << std::setfill(' ');
	outFile << employee_id;
	outFile << std::right << std::setw(15) << std::setfill(' ');
	outFile << std::fixed << std::setprecision(2) << pay_rate;
	outFile << std::right << std::setw(10) << std::setfill(' ');
	outFile << std::fixed << std::setprecision(2) << hours_worked;
	outFile << std::right << std::setw(15) << std::setfill(' ');
	outFile << std::fixed << std::setprecision(2) << wage;

	outFile << std::endl;
}
