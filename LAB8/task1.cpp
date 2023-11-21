#include <iostream>

void check_diff(char* a, char* b, int* diff, int& nums);

const int SIZE = 8;

int main(){
	char array1[] = {'A', 'D', 'C', 'B', 'B', 'A', 'C', 'A'};
	char array2[] = {'A', 'A', 'C', 'B', 'A', 'A', 'B', 'A'};
	
	int result[SIZE];
	
	int num_diffs = 0;
	
	check_diff(array1, array2, result, num_diffs);
	
	std::cout << "Array1 and Array2 are different in the following " << num_diffs << " positions: " << std::endl;
	
	for (int i = 0; i < num_diffs - 1; i++){
		std::cout << result[i] << ", ";
	} 
	
	std::cout << result[num_diffs - 1] << std::endl;
	
}

void check_diff(char* a, char* b, int* diff, int& nums){
	for (int i = 0; i < SIZE; i++){
		if (a[i] != b[i]){
			diff[nums] = i + 1;
			nums++;
		}
	}	
	
	return;
} 
