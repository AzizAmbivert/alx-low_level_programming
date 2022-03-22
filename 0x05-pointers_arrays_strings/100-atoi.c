#include "main.h"

/**
 *_atoi - Convert a string to an integer.
 *@s: The pointer to convert
 *Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	int nm = 0;
	unsigned int j = 0;
	int k = 1;

	while (s[c])
	{
		if (s[c] == 45)
		{
			k *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			nm = 1;
			j = (j * 10) + (s[c] - '0');
			c++;
		}
		if (nm == 1)
		{
			break;
		}
		c++;
	}
	j *= nm;
	return (j);
}
