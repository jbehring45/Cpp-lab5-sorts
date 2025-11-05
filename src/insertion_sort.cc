#include "myheaders.h"

void insertion_sort(long data[], int size) {
	long temp = 0;

	for (int i=0; i<size; i++) {
		temp = data[i];
		int j = i;
		
		while (j>0 && temp < data[j-1]) {
			data[j] = data[j-1];
			j--;
		}
		data[j] = temp;
	}
}
