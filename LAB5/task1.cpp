/*
This program finds the lowest of the four test scores using a
function.
*/

#include <iostream>

using namespace std;

//Complete the function prototype of findLowest()
float findLowest(float s1, float s2, float s3, float s4);

int main()
{
	float score1, score2, score3, score4;
	//validate scores
	
	do
	{
		cout << "Enter a test score in the range of 1 to 100: " << endl;
		cin >> score1;
	} while (score1 < 0 || score1 > 100);
	
	do
	{
		cout << "Enter a test score in the range of 1 to 100: "<<endl;
		cin >> score2;
	} while (score2 < 0 || score2 > 100);
	
	do
	{
		cout << "Enter a test score in the range of 1 to 100: "<<endl;
		cin >> score3;
	} while (score3 < 0 || score3 > 100);
	
	do
	{
		cout << "Enter a test score in the range of 1 to 100: "<<endl;
		cin >> score4;
	} while (score4 < 0 || score4 > 100);
	
	//call function findLowest() to compute the lowest score
	float lowest_score = findLowest(score1,score2,score3,score4);
	
	//display the lowest score
	cout << lowest_score << endl;
	
	return 0;
}

// This function finds and returns the lowest of the four test scores passed to it.
float findLowest(float s1, float s2, float s3, float s4)
{
	//complete this function
	float min_score = 101;
	
	if (s1 < min_score)
	{
		min_score = s1;
	}
		
	if (s2 < min_score)
	{
		min_score = s2;
	}

	if (s3 < min_score)
	{
		min_score = s3;
	}

	if (s4 < min_score)
	{
		min_score = s4;
	}

	return min_score;
}
