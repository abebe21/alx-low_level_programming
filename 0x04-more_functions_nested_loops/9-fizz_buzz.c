#include <stdio.h>

/**
 *  main -  prints the numbers from 1 to 100
 *
 *  Return: always 0
 *
 **/

int main(void)
{
	int h;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fibu[] = "FizzBuzz";
	
	for (h = 1; h <= 100; h++)
	{
		if (h % 3 == 0 && h % 5 != 0)
			printf(" %s", fizz);
		else if (h % 5 == 0 && h % 3 != 0)
			printf(" %s", buzz);
		else if (h % 3 == 0 && h % 5 == 0)
			printf(" %s", fibu);
		else if (h == 1)
			printf("%d", h);
		else
			printf(" %d", h);
	}
	printf("\n");
	return (0);
}
