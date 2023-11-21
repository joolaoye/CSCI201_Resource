#include <iostream>

# include "Employee.h"

#include "EmployeeList.h"

using namespace std;


int main()

{

EmployeeList employeeDatabase; //test the constructor

Employee aWorker;

string firstN; // Local variable for firstName

string lastN; // Local variable for lastName

int id; // Local variable for id number

float rate; // Local variable for id number

float hours; // Local variable for id number

float wage; // Local variable for id number


// Test the add operation

// 1. Enter four employee data and add to the list workers

for (int i=0; i<4; ++i)

{

//2. get one employee
cout << "Enter Employee you will like to add" << endl;
cin >> aWorker;
cout << endl;

//3. add it to the list. Follow the function definition to test all
//cases
if (employeeDatabase.add(aWorker)) cout << "Employee Added" << endl;
else cout << "Employee already exists" << endl;

cout << endl;

}


//Test the delete operation

//First ask the user to enter the employee to be deleted and then delete
cout << "Enter Employee you will like to delete" << endl;
cin >> aWorker;
cout << endl;
//it from the list. Follow the function definition to test all cases
if (employeeDatabase.remove(aWorker)) cout << "Employee removed" << endl;
else cout << "Employee does not exist" << endl;
cout << endl;



// Test the modify function
int index;
//First ask the user to enter the index of employee to be modified in the
cout << "Enter index of Employee you want to Modify: ";
cin >> index;
//list and then modify it from the list. Follow the function definition to

cout << employeeDatabase.returnEmployee(index).getFirstName() << endl;
cout << employeeDatabase.returnEmployee(index).getLastName() << endl;
//test all the cases
employeeDatabase.changeInfo(index);

cout << employeeDatabase.returnEmployee(index).getFirstName() << endl;
cout << employeeDatabase.returnEmployee(index).getLastName() << endl;

return 0;

}
