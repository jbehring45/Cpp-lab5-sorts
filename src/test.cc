//File to test out sorting algorithms on a smaller scale

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "myheaders.h"

int main(){
	int size = 10;
	long arr[size] = {1001, -521, 67, 68, 96, 999, -1024, 6, 9, 0};
	selection_sort(arr, size);
	printarray(arr, size);
	std::cout << "Using Selection" << std::endl;
	return 1;
}
