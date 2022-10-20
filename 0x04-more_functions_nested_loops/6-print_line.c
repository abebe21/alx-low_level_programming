#include "main.h"

/**
 *  print_line - draws a straight line in the terminal
 *
 *  @n: number of times the character _ should be printed
 *
 **/

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int h;

		for (h = 1; h <= n; h++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
