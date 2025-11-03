/*
 	 program to test sorting functions on smaller scale
 */
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "myheaders.h"

int main(){
	int size = 1;
	long arr[size] = {1};
	bubble_sort(arr, size);
	printarray(arr, size);
	return 1;
}



