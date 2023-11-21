/*
This program finds the lowest of the four test scores using a
function.
*/

#include <iostream>

using namespace std;

const int INTMAX = 214783647;

// Complete the function prototype of findLowest()
float findLowest(float s1, float s2, float s3, float s4);
void displayResult(float s1, float s2, float s3, float s4, float lowest);
float getScore();


int main()
{
	float score1, score2, score3, score4;
	
	score1 = getScore();
	score2 = getScore();
	score3 = getScore();
	score4 = getScore();
	
	//call function findLowest() to compute the lowest score
	float lowest_score = findLowest(score1, score2, score3, score4);

	//display the lowest score
	displayResult(score1, score2, score3, score4, lowest_score);

	return 0;
}

// This function finds and returns the lowest of the four test scores passed to it.
float findLowest(float s1, float s2, float s3, float s4)
{
	float min_score = INTMAX;
	
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

void displayResult(float s1, float s2, float s3, float s4, float lowest){
	cout << "The four scores are " << 
		s1 << ", " <<  
		s2 << ", " <<   
		s3 << " and " << s4 << ". The lowest score is " << lowest << "." << endl;
}

float getScore()
{
	float score;
	//validate score
	do
	{
		cout << "Enter a test score in the range of 1 to 100: "
			<< endl;
		cin >> score;
	}while (score < 0 || score > 100);
	
	return score;
}