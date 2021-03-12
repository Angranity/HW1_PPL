#include <stdio.h>
#include "q5.h"


int* sortArray_E(int arr[], int size)
{
	int counter = 0;
BottomUp:
	if (size == 1)
		return arr;
	counter++;
	if (arr[counter] < arr[counter - 1])
		swap(&arr[counter], &arr[counter - 1]);

	if (counter < size - 1)
		goto BottomUp;
	counter++;
TopDown:
	counter--;
	if (arr[counter] < arr[counter - 1])
		swap(&arr[counter], &arr[counter - 1]);

	if (counter > 1)
		goto TopDown;
	else
	{
		counter = 0;
		size--;
		goto BottomUp;
	}


}

void q5_E()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_E(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", sortedArray[i]);
}