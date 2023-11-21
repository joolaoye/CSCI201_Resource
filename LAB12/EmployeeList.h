#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

#include "Employee.h"

const int MAX = 100;

class EmployeeList{
    int numEmployees;
    Employee List[MAX];

public:
    EmployeeList();
    bool add(const Employee&);
    bool remove(const Employee&);
    int search(int id);
    void changeInfo(int);
    int returnSize();
    Employee returnEmployee(int);

};



#endif
