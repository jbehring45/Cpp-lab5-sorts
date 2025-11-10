#include "myheaders.h"

//Function to bubble sort an array
void bubble_sort(long arr[], int size) {
	//Loop to run through the array the needed times to make sure it is fully sorted.
	for(int i = 0; i < size-1; ++i){
		//Loop to run through the array and compare elements and swap as nedded
		for(int j = 0; j < size-1-i; ++j){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
