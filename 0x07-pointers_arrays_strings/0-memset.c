#include "main.h"

/**
 * _memset - a function to append n number of character to string s
 *
 *@s: String aprameter
 *@b: string to be concat
 *@n:number of characters
 *
 *Return: String
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	for (a = 0;a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
