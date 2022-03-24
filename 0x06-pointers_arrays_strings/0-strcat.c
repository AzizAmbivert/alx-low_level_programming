#include "main.h"

/**
 *strcat - Concatenates the string pointed to by @src
 * @dest: The string to be appended upon.
 *@src: The source string to be appended to @dest.
 *
 *Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
