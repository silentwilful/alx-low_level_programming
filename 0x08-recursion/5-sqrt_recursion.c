#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - returning of the natural square root of a number
 *@n: number
 *
 *
 *Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}


/**
 *_sqrt - returns square root number
 *@a: input number at sqrt
 *@b: sqrt number for find sqrt
 *
 *Return: -1 or sqrt of b
 */
int _sqrt(int a, int b)
{

	if (b * b > a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (b);
	}
	return (is_square_root(a, b + 1));
}
