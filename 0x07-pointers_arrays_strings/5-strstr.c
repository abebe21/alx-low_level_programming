#include "main.h"

/**
 * *_strstr - function finds a string in a given string
 * @haystack: given string wher to find
 * @needle: a string to besearched
 *
 * Return: function returned string
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}
}
