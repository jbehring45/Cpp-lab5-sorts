// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!

#include <iostream>
#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void printmenu();
void printarray(long data[], long size);
int readfile(string infilename, long data[]);
int	writefile(long data[], long size, string outfilename);
void swap(long& x, long& y);

void insertion_sort(long data[], int size);
void selection_sort(long data[], int size);
void bubble_sort(long data[], int size);
void merge_sort(long data[], int size);
void quick_sort(long data[], int size);
