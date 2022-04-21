#include "main.h"

/**
 *swap_int  swap value of two intergers
 *
 * @a: value of first integer
 * @b: value of second integer
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
