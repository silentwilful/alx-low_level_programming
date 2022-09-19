#include "main.h"

/**
 *swap_int - swaps the values of a and b
 *@a: first int to swap
 *@b: second int to swap
 *
 *Return void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

