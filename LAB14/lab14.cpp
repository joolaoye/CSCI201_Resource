#include <iostream>
#include <iomanip>

void sortTestScores(std::string*, std::string*, int*, int);
int calcAvgScore(int*, int);
void displayTestScores(std::string*, std::string*, int*, int);

int main()
{
    int numOfStudents;

    std::string lName;
    std::string fName;
    int testscore;

    std::cout << "How many test scores will you enter? ";
    std::cin >> numOfStudents;
    std::cout << std::endl;

    std::string* studentLastName = new std::string[numOfStudents];
    std::string* studentFirstName = new std::string[numOfStudents];
    int* studentTestScores = new int[numOfStudents];

    for (int i = 0; i < numOfStudents; i++)
    {
        std::cout << "Enter student " << i + 1 << "'s last name: ";
        std::cin >> lName;
        studentLastName[i] = lName;

        std::cout << "Enter student " << i + 1 << "'s first name: ";
        std::cin >> fName;
        studentFirstName[i] = fName;

        std::cout << "Enter that student's test score: ";
        std::cin >> testscore;
        studentTestScores[i] = testscore;
        std::cout << std::endl;
    }

    std::cout << "Student data you entered: " << std::endl << std::endl;
    displayTestScores(studentLastName, studentFirstName, studentTestScores, numOfStudents);

    std::cout << "Student data you entered: " << std::endl << std::endl;
    sortTestScores(studentLastName, studentFirstName, studentTestScores, numOfStudents);
    displayTestScores(studentLastName, studentFirstName, studentTestScores, numOfStudents);

    std::cout << "Average: " << calcAvgScore(studentTestScores, numOfStudents) << std::endl;

    delete[] studentLastName;
    studentLastName = nullptr;

    delete[] studentFirstName;
    studentFirstName = nullptr;

    delete[] studentTestScores;
    studentTestScores = nullptr;
    
}

void sortTestScores(std::string* lastNames, std::string* firstNames, int* testScores, int students)
{
    int minIndex;
    int tempI;
    std::string tempS;

    for (int i = 0; i < students; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < students; j++)
        {
            minIndex = (testScores[i] < testScores[j]) ? j : i;
        }

        tempI = testScores[i];
        testScores[i] = testScores[minIndex];
        testScores[minIndex] = tempI; 

        tempS = lastNames[i];
        lastNames[i] = lastNames[minIndex];
        lastNames[minIndex] = tempS; 

        tempS = firstNames[i];
        firstNames[i] = firstNames[minIndex];
        firstNames[minIndex] = tempS; 
    }
}

int calcAvgScore(int* testScores, int students)
{
    int runningSum = 0;

    for (int i = 0; i < students; i++)
    {
        runningSum += testScores[i];
    }

    return runningSum / students;
}

void displayTestScores(std::string* lastNames, std::string* firstNames, int* testScores, int students)
{
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "FirstName";
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "LastName";
    std::cout << std::left << std::setw(6) << std::setfill(' ') << "Score";
    std::cout << std::endl;

    for (int i = 0; i < students; i++)
    {
        std::cout << std::left << std::setw(10) << std::setfill(' ') << firstNames[i];
        std::cout << std::left << std::setw(10) << std::setfill(' ') << lastNames[i];
        std::cout << std::left << std::setw(6) << std::setfill(' ') << testScores[i];
        std::cout << std::endl;
    }

    std::cout << std::endl;
}