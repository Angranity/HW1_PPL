#include <stdio.h>
#include "q5.h"



int* sortArray_C(int arr[])
{
	if (arr[1] < arr[0])
		swap(&arr[1], &arr[0]);
	if (arr[2] < arr[1]) {
		swap(&arr[2], &arr[1]);
		if (arr[1] < arr[0])
			swap(&arr[1], &arr[0]);
	}
	if (arr[3] < arr[2])
	{
		swap(&arr[3], &arr[2]);
		if (arr[1] < arr[0])
			swap(&arr[1], &arr[0]);
		if (arr[2] < arr[1]) {
			swap(&arr[2], &arr[1]);
			if (arr[1] < arr[0])
				swap(&arr[1], &arr[0]);
		}
	}
	if (arr[4] < arr[3])
	{
		swap(&arr[4], &arr[3]);
		if (arr[3] < arr[2]) {
			swap(&arr[3], &arr[2]);
			if (arr[1] < arr[0])
				swap(&arr[1], &arr[0]);
			if (arr[2] < arr[1]) {
				swap(&arr[2], &arr[1]);
				if (arr[1] < arr[0])
					swap(&arr[1], &arr[0]);
			}
		}
	}
	return arr;
}

void q5_C()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_C(arr);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", sortedArray[i]);
}

