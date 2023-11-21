#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include <iostream>


class Employee{
    int id;
    std::string firstName, lastName;
    double rate, hours, wage;

public:
    Employee(){
        id = 0;
        firstName = "";
        lastName = "";
        rate = 0;
        hours = 0;
        wage = 0;
    }
    
    Employee(int id, std::string firstName, std::string lastName, double rate, double hours, double wage);
   
    void setLastName(std::string name);

    void setFirsttName(std::string name);

    void setId(int value);

    void setRate(double value);

    void setHours(double value);

    std::string getLastName();

    std::string getFirstName();

    int getId();

    double getRate();

    double getHours();

    double getWages();
};

#endif
