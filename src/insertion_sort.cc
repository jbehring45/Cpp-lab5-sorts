#include "myheaders.h"


static void push_back(long data[], int startIdx, int endIdx) {
	while (endIdx != startIdx) {
		data[endIdx] = data[endIdx-1];
		endIdx -= 1;
	}
}

void insertion_sort(long data[], int size) {
	long temp = 0;

	for (int i=0; i<size; i++) {
		for (int j=0; j<i; j++) {
			if (data[i] < data[j]) {
				temp = data[i];
				push_back(data, j, i);
				data[j] = temp;
			}
		}
	}
}
