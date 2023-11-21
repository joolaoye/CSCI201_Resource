#include <iostream>

#include "Employee.h"

using namespace std;


int main()

{

Employee e; //Define an employee object by the default constructor

string firstN; // Local variable for firstName

string lastN; // Local variable for lastName

int id; // Local variable for id number

float rate; // Local variable for hourly rate

float hours; // Local variable for hours worked

float wage; // Local variable for employee wage


// Get the employee e's data from the user.
cout << "Enter your first name: ";
cin >> firstN;

cout << "Enter your last name: ";
cin >> lastN;

cout << "Enter your id number: ";
cin >> id;

cout << "Enter your hourly rate: ";
cin >> rate;

cout << "Enter your hours worked: ";
cin >> hours;

cout << endl << endl;

// set the employee e's data
e.setFirsttName(firstN);
e.setLastName(lastN);
e.setId(id);
e.setRate(rate);
e.setHours(hours);

// Display the employee e's data in the following order

// id, first name, last name, rate, hours, wage
cout << "ID: " << e.getId() << endl;
cout << "First Name: " << e.getFirstName() << endl;
cout << "Last Name: " << e.getLastName() << endl;
cout << "Hourly rate: " << e.getRate() << endl;
cout << "Hours worked: " << e.getHours() << endl;
cout << "Wage: " << e.getWages() << endl;

return 0;

}
