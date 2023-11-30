// C Program for calculating 
// maximum and minimum element 
#include <stdio.h> 

void find_small_large(int arr[], int n) 
{ 
	int min, max; 

	// assign first element as minimum and maximum 
	min = arr[0]; 
	max = arr[0]; 

	for (int i = 1; i < n; i++) { 

		// finding smallest here 
		if (arr[i] < min) 
			min = arr[i]; // finding largest here 
		if (arr[i] > max) 
			max = arr[i]; 
	} 
	printf("Maximum: %d and Minimum: %d\n", min, max); 
} 

int main() 
{ 
	int arr[] = { 15, 14, 35, 2, 11, 83 }; 
	int len = sizeof(arr) / sizeof(arr[0]); 

	// Function call 
	find_small_large(arr, len); 

	return 0; 
}
