#include "myheaders.h"

void swap(long* a, long* b) {
        long temp = *a;
        *a = *b;
        *b = temp;
}


static void _merge(long arr1[], long arr2[], long arr3[], int arr2Size, int arr3Size) {
    int i1 = 0, i2 = 0, i3 = 0;

    while (i2<arr2Size && i3<arr3Size) {
        if (arr2[i2] < arr3[i3]) arr1[i1++] = arr2[i2++];
        else arr1[i1++] = arr3[i3++];
    }

    if (i2<arr2Size) {
        memcpy(&arr1[i1], &arr2[i2], (arr2Size-i2) * sizeof(long));
    }
    else {
        memcpy(&arr1[i1], &arr2[i3], (arr3Size-i3) * sizeof(long));
    }
}

static void _merge_sort(long dest[], int start, int end) {
    if (start >= end) return;

    int mid = start + (end-start)/2;
    int arr1Size = mid-start+1;
    int arr2Size = end-mid;

    long* arr1 = new long[arr1Size];
    long* arr2 = new long[arr2Size];

    memcpy(arr1, &dest[start], arr1Size * sizeof(long));
    memcpy(arr2, &dest[mid+1], arr2Size * sizeof(long));

    _merge_sort(arr1, 0, arr1Size-1);
    _merge_sort(arr2, 0, arr2Size-1);
    _merge(&dest[start], arr1, arr2, arr1Size, arr2Size);

    delete[] arr1;
    delete[] arr2;
}

static void _merge_sort(long dest[], int start, int end) {
    if (start >= end) return;

    int mid = start + (end-start)/2;
    int arr1Size = mid-start+1;
    int arr2Size = end-mid;

    long* arr1 = new long[arr1Size];
    long* arr2 = new long[arr2Size];

    memcpy(arr1, &dest[start], arr1Size * sizeof(long));
    memcpy(arr2, &dest[mid+1], arr2Size * sizeof(long));

    _merge_sort(arr1, 0, arr1Size-1);
    _merge_sort(arr2, 0, arr2Size-1);
    _merge(&dest[start], arr1, arr2, arr1Size, arr2Size);

    delete[] arr1;
    delete[] arr2;
}

void merge_sort(long data[], int size) {
    // An array of size 1 is already sorted (breaks pointer logic)
    if (size <= 1) return;

    _merge_sort(data, 0, size-1);
}
