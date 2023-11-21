//  This program prints "You Pass" if a student's average is 
//  60 or higher and prints "You Fail" otherwise

// PLACE YOUR NAME HERE

#include <iostream>

using namespace std;

int main()
{

	float average; // holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
	{
		cout << "Invalid data" << endl;
	}

	else if (90 <= average && average <= 100)
	{
		cout << "A" << endl;
	}
		
	else if (80 <= average && average < 90)
	{
		cout << "B" << endl;
	}
		
	else if (60 <= average && average < 80)
	{
		cout << "You Pass" << endl;
	}
		
	else if (0 <= average && average < 60)
	{
		cout << "You Fail" << endl;
	}

    return 0;	
}
