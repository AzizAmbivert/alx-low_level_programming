#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: The string to be modified
 *Return: void
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, snip;
	a = z;

	while (z[c] != '\n')
	{
		c++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		snip = z[i];
		z[i] = *a;
		*a = snip;
		a--;
	}
}
