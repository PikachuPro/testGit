/* insertSort.c -- insert Sort */
#include <stdio.h>
#define LEN 6

int *insertSort (int [], int n);

int main (void)
{
	int array[LEN] = { 5, 2 ,4, 7, 8, 1 };

	/* Call insertSort function */
	insertSort (array, LEN);

	for (int i = 0; i < LEN; i++)
	{
		printf ("%d ", array[i]);
	}
	putchar ('\n');

	return 0;
}

int *insertSort (int ar[], int n)
{
	int key;
	int j, i;

	for (j = 1; j < LEN; j++)
	{
		key = ar[j];

		i = j - 1;
		while (i >= 0 && ar[i] < key)
		{
			ar[i + 1] = ar[i];
			i--;
		}
		ar[i + 1] = key;
	}

	return ar;
}
