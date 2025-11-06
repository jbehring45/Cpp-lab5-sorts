#include "myheaders.h"


void selection_sort(long data[], int size) 
{
	long minIndex;

	    for (long i = 0; i < size - 1; i++)
	    {
	        minIndex = i; // set the min index to the ith iteration

	        for (long j = i + 1; j < size; j++)
	        {
	            if (data[j] < data[minIndex])
	            {// if any element after the ith is less store the new minIndex
	            	minIndex = j;
	            }
	        }
	        if (minIndex != i) // if the min index is unique, swap the two elements so there is a new min
	        {
	            swap(data[i], data[minIndex]);
	        }
	    }
}
