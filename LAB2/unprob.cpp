#include <iostream>

using namespace std;

int main()
{
    //variables declarations
    float number;
    int divider;

    //initialize the varaible
    divider = 2;

    // Prompt user to enter a number from keyboard
    cout << "Hi there" << endl;
    cout << "Please input a number and then hit return" << endl;
    cin >> number;

    //perform division
    number = number / divider;

    //output the result to screen
    cout << "Half of your number is " << number << endl;
    
    return 0;
}

