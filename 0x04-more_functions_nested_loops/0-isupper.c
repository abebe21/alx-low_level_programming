#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: the character it checks
 * Return: 1 if c is uppercase, 0 otherwise.
 *
 **/

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
