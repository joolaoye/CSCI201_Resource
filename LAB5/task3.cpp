/*
This program finds the lowest of the four test scores using a
function.
*/

#include <iostream>

using namespace std;

//Complete the function prototype of findLowest()
float findLowest(float s1, float s2, float s3, float s4);

float calcAverage(float s1, float s2, float s3, float s4);

void displayResult(float s1, float s2, float s3, float s4, float lowest);

float getScore();

int main()
{
	float score1, score2, score3, score4;
	
	score1 = getScore();
	score2 = getScore();
	score3 = getScore();
	score4 = getScore();
	
	float average = calcAverage(score1, score2, score3, score4);
	
	displayResult(score1, score2, score3, score4, average);
	
	return 0;
}

// This function finds and returns the lowest of the four test scores passed to it.
float findLowest(float s1, float s2, float s3, float s4)
{
	float min_score = 101;
	
	min_score = (s1 < min_score) ? s1 : min_score;
		
	min_score = (s2 < min_score) ? s2 : min_score;
		
	min_score = (s3 < min_score) ? s3 : min_score;
		
	min_score = (s4 < min_score) ? s4 : min_score;
	
	return min_score;	
	
}

void displayResult(float s1, float s2, float s3, float s4, float average){
	cout << "The scores you entered are " << 
		s1 << ", " <<  
		s2 << ", " <<   
		s3 << " and " << s4 << ". After dropping the lowest test score, the test average is " 
		 << average << "." << endl;
}


float calcAverage(float s1, float s2, float s3, float s4){
	float lowest = findLowest(s1, s2, s3, s4);

	return (s1 + s2 + s3 + s4 - lowest) / (3.0);

}

float getScore(){
	float input;
	
	cout << "Enter a test score between 0 and 100: ";
	cin >> input;
	
	while (input < 0 || input > 100){
		
		cout << "Score must be in the range 0 - 100. Please re-enter score: ";
		cin >> input;	
	}
	
	return input;

}
