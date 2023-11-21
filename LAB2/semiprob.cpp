// This program demonstrates a compile error.
// Place your name here
// Place your name here
// Place today's date here
// Place file name here

#include <iostream>

using namespace std;

int main()
{
    //variable declarations
    int number;
    float total;

    cout << "Today is a great day for Lab";
    cout << endl << "Let's start off by typing a number of your choice" << endl;
    cin >> number; //get a number from the keyboard

    //perform calculation
    total = number * 2;

    //output the result
    cout << total << " is twice the number you typed" << endl;

    return 0;
}
