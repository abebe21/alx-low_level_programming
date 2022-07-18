#include "main.h"

/**
* *_strchr -> String character finding function
* @s: source string
* @c: to be searched character
*
* Return: retuned value by function
*
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;

	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
