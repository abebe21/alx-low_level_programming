#include "main.h"

/**
* _strcat ->  function to concat string
*
*@dest:first parameter
*@src:second parameter
*
*return:string
*/
char *_strcat(char *dest, char *src)
{
	int l, i;

	while (dest[l])
		l++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';

	return (dest);
}
