// Implementation file for the Rectangle class.
// This version has a constructor that accepts arguments.
#include "Employee.h"   // Needed for the Rectangle class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;

//***********************************************************
// The constructor accepts arguments for width and length.  *
//***********************************************************

Employee::Employee(int id, std::string firstName, std::string lastName, double rate, double hours, double wage)
{
    id = id; 
    firstName = firstName;
    lastName = lastName;
    rate = rate;
    hours = hours;
    wage = wage;
}

//***********************************************************
// setWidth sets the value of the member variable width.    *
//***********************************************************

void Employee::setLastName(std::string name)
{
   if (name != "")
      lastName = name;
   else
   {
      cout << "Invalid width\n";
      exit(EXIT_FAILURE);
   }
}


void Employee::setFirsttName(std::string name)
{
   if (name != "")
      firstName = name;
   else
   {
      cout << "Invalid width\n";
      exit(EXIT_FAILURE);
   }
}

void Employee::setId(int value)
{
   if (value > 0)
      id = value;
   else
   {
      cout << "Invalid width\n";
      exit(EXIT_FAILURE);
   }
}

void Employee::setRate(double value)
{
   if (value > 0)
      rate = value;
   else
   {
      cout << "Invalid width\n";
      exit(EXIT_FAILURE);
   }
}

void Employee::setHours(double value)
{
   if (value > 0)
      hours = value;
   else
   {
      cout << "Invalid width\n";
      exit(EXIT_FAILURE);
   }
}

//***********************************************************
// setLength sets the value of the member variable length.  *
//***********************************************************

std::string Employee::getFirstName()
{
   return firstName;
}

std::string Employee::getLastName()
{
   return lastName;
}

int Employee::getId()
{
   return id;
}

double Employee::getRate()
{
   return rate;
}

double Employee::getHours()
{
   return hours;
}

double Employee::getWages()
{
    wage = rate * hours;
    return wage;
}