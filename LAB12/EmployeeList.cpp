#include "EmployeeList.h"

EmployeeList::EmployeeList(){
    this->numEmployees = 0;
}

bool EmployeeList::add(const Employee& e){
    if (numEmployees >= MAX) return false;

    for (int i = 0; i < numEmployees; i++){
        if (List[i] == e){
            return false;
        }
    }

    List[numEmployees++] = e;
    return true;
}

bool EmployeeList::remove(const Employee& e){
    int index = -1;

    for (int i = 0; i < numEmployees; i++){
        if (List[i] == e){
            index = i;
            break;
        }
    }

    if (index == -1) {
        return false;
    } 
    
    for (int i = index; i < numEmployees - 1; i++){
        List[i] = List[i + 1];
    }

    List[numEmployees - 1] = Employee();
    numEmployees--;
    return true;
}


int EmployeeList::search(int id){
    for (int i = 0; i < numEmployees; i++){
        if (List[i].getId() == id){
            return i;
        }
    }   

    return -1;
}


void EmployeeList::changeInfo(int index){
    if (index >= numEmployees){
        std::cout<<"No Change because of invalid index. \n";
        return;
    }

	
    int id;
    std::string firstName;
    std::string lastName;
    double hours;
    double rate; 
    char gender;
    char answer;
    
    std::cout << "Change ID? ";
    std::cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
        std::cout <<"Enter ID: ";
        std::cin >> id;
        List[index].setId(id);
        std::cout << "Id changed!" << std::endl;
    }
    
    
    std::cout << "Change first name? ";
    std::cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
        std::cout <<"Enter first name: ";
        std::cin >> firstName;
        List[index].setFirstName(firstName);
        std::cout << "firstname  changed!" << std::endl;
    }
    
    std::cout << "Change last name? ";
    std::cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
        std::cout <<"Enter last name: ";
        std::cin >> lastName;
        List[index].setLastName(lastName);
        std::cout << "last name  changed!" << std::endl;
    }
    
    std::cout << "Change rate? ";
    std::cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
        std::cout <<"Enter rate: " ;
        std::cin >> rate;
        List[index].setRate(rate);
        std::cout << "rate changed!" << std::endl;
    }
    
    std::cout << "Change hours? ";
    std::cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
        std::cout <<"Enter hours: ";
        std::cin >> gender;
        List[index].setHours(hours);
        std::cout << "hours changed!" << std::endl;
    }
}


int EmployeeList::returnSize(){
    return numEmployees;
}


Employee EmployeeList::returnEmployee(int index){
    return List[index];
}
