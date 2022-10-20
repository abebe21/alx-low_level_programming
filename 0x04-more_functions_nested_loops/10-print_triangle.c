#include "main.h"

/**
 *  print_triangle - prints a triangle, followed by a new line
 *
 *  @size: size of the triangle
 *
 **/

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int h, g;
		
		for (h = 0; h < size; h++)
		{															for (g = size - 1; g >= 0; g--)
			{
				if (g <= h)
				{
					putchar('#');
				} else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
