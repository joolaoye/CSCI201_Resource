// Header file for the Employee class

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // Needed for string

/**
 * Represents an Employee with attributes such as ID, first name, last name, hourly rate, and hours worked
 */
class Employee
{
private:
    int id; /**< The ID of the Employee */
    std::string firstName; /**< The first name of the Employee */
    std::string lastName; /**< The last name of the Employee */
    double rate; /**< The hourly rate of the Employee */
    double hours; /**< The hours worked of the Employee */

public:
    // Constructors
    Employee();
    Employee(int id, std::string firstName, std::string lastName, double rate, double hours);

    // Setter methods
    void setLastName(std::string name);
    void setFirstName(std::string name);
    void setId(int value);
    void setRate(double value);
    void setHours(double value);

    // Getter methods
    std::string getLastName() const;
    std::string getFirstName() const;
    int getID() const;
    double getRate() const;
    double getHours() const;
    double getWages() const;

    // Operator overloads
    bool operator== (const Employee&);
    bool operator!= (const Employee&);

    // Friend functions for stream operators
    friend std::ostream& operator<< (std::ostream&, const Employee&);
    friend std::istream& operator>> (std::istream&, Employee&);
};

#endif // EMPLOYEE_H
