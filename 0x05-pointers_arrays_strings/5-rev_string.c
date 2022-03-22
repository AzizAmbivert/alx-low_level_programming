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

	a = s;

	while (s[c] != '\n')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		snip = s[i];
		s[i] = *a;
		*a = snip;
		a--;
	}
}
