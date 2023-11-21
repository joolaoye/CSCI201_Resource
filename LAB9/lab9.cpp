// This program produces a student tests report  
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void dualSort(int [], int [], int);
void showOrder(int [], int [], int);


// NUM_STUDENTS is the number of students.
const int NUM_STUDENTS = 10;

int main()
{
   // Array with student ID numbers
   int ids[NUM_STUDENTS] = {1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020,
                        1021, 1022};

   // Array with tests scores
   int tests[NUM_STUDENTS] = {99, 78, 69, 88,83, 91, 75, 83,63, 56};


   // Display the student id and test scores before sorting. 
   showOrder(tests, ids, NUM_STUDENTS);


   // Sort the elements in the tests array in descending
   // order and shuffle the ID numbers in the id array to
   // keep them in parallel.
   dualSort(ids, tests, NUM_STUDENTS);


   // Display the student id and test scores after sorting.
   showOrder(tests, ids, NUM_STUDENTS);


   return 0;
}


/** dualSort
 *  This function performs a descending order selection sort on   
 *  the tests array. The elements of the id array are exchanged   
 *  identically as those of the tests array. size is the number   
 *  of elements in each array.
 *  @Pre: id and tests arrays: ids[] and tests[]
          the number of elements in each array: size
 *  @Post:sorted array ids[] and tests[] */ 

void dualSort(int ids[], int tests[], int size)
{
   int temp;
   int min_id;
	// fill the code
   for (int i = 0; i < size; i++){

      min_id = i;

      for (int j = i + 1; j < size; j++){
         min_id = (tests[min_id] < tests[j]) ? j : min_id;
      }

      // Swap test scores
      temp = tests[min_id];
      tests[min_id] = tests[i];
      tests[i] = temp;
      
      // Swap ids
      temp = ids[min_id];
      ids[min_id] = ids[i];
      ids[i] = temp;
   }
}


/** showOrder
 *  The function first displays a heading, then the sorted list 
 *  of student numbers and tests.  
 *  @Pre: id and tests arrays: ids[] and tests[]
          the number of elements in each array: size
 *  @Post:none */ 
void showOrder(int tests[], int ids[], int num)
{
   cout << "Student ID \t tests\n";
   cout << "----------------------------------\n";
   for (int index = 0; index < num; index++)
   {
      cout << ids[index] << "\t";
      cout << setw(14) << tests[index] << endl;
   }
   cout << endl;
}
