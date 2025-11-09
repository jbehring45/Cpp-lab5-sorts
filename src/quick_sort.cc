#include "myheaders.h"

//Function that quicksorts an array from index first to index last
void quick_sort(long arr[], int first, int last){
	//Declare and  variables for the upper and lower limits of the sub arrays
	int lower = first+1;
	int upper = last;

	//Find an element from the middle of the array to use as a bound and place it at the front
	swap(arr[first], arr[(first+last)/2]);
	long bound = arr[first];

	//Go through the loop and break it into two sub arrays, one with elements higher than the bound and one with element less than
	while(lower <= upper){
		while(bound > arr[lower]){
			lower++;
		}
		while(bound < arr[upper]){
			upper--;
		}
		//Once two elements are found out of place in each sub array, swap them into the correct sub array
		if(lower < upper){
			swap(arr[lower++], arr[upper--]);
		} else {
			lower++;
		}
	}

	//Once finished traversing the array, move the bound used from index 0 to proper position
	swap(arr[upper], arr[first]);

	//Recursive call of array to sort the sub array for elements less than the bound
	if(first < upper-1){
		quick_sort(arr,first,upper-1);
	}

	//Recursive call of array to sort the sub array for elements greater than the bound
	if(upper+1 < last){
		quick_sort(arr, upper+1,last);
	}
}

//Function that is called from main, puts largest element at back and calls recursive function
void quick_sort(long arr[], int size) {
	//Declares and initializes a variable to store the index of the largest element
	int max= 0;
	//Returns if the array only has one element
	if(size < 2){
		return;
	}
	//Find the index of the max element in the array
	for(int i = 1; i < size; ++i){
		if(arr[max] < arr[i]){
			max = i;
		}
	}
	//Place the max element at the end of the array
	swap(arr[size-1], arr[max]);
	//Call quick_sort function to do a quicksort on the rest of the array
	quick_sort(arr, 0, size-2);
}
