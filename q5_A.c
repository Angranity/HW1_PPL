#include <stdio.h>
#include "q5.h"

void swap(int *a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int* sortArray_A(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; (arr[j] > arr[j + 1]) && j < size - 1; j++)
			swap(&arr[j], &arr[j + 1]);
	}
	return arr;
}

void q5_A()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_A(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", sortedArray[i]);
}