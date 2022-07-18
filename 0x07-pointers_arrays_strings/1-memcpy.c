#include "main.h"
/**
 * _memcpy -> memory copy functioin
 * @dest: is destination string
 * @src: source String
 * @n: number of characters to be appeded
 *
 *Return: return a pointer to destinations
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
