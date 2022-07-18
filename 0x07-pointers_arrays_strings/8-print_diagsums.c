#include "main.h"

/**
 *print_diagsums - printing diagonals
 *@a:size of diagnals
 *@size: length of diagonals
 *
 *Return: nothing
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for  (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\", sum1, sum2);
}
