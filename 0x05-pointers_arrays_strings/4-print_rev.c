#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int counter = 0;

	while (counter >= 0)
	{
		if(s[counter] == '\0')
			break;
		contnue;
	}

	for (counter--; counter >= 0; counter++)
		_putchar(s[counter]);
	_putchar('\n');
}
