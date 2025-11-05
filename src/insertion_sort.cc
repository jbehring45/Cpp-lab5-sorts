#include "myheaders.h"

void bubble_sort(long arr[], int size) {
	for(int i = 1; i < size-1; ++i){
		for(int j = 0; j < size-2; ++j){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
