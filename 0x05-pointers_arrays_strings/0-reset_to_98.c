#include "main.h"
/**
 * takes a pointer to an int as parameter and updates the value it points to to 98
 * Returns :void
 */
void reset_to_98(int *n);
{
	int n = 402;
	int *p = &n;
	*p = 98;
}
