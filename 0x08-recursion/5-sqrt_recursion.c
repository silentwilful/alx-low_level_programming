#include "main.h"
/**
 *_sqrt_recursion - returning of the natural square root of a number
 *@n: number
 *
 *
 *Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}


/**
 *_sqrt - returns square root number
 *@x: input number at sqrt
 *@y: sqrt number for find sqrt
 *
 *Return: -1 or sqrt of y
 */
int _sqrt(int x, int y)
{
	if (x > y / 2)
		return (-1);
	else if (x * x == y)
		return (x);
	return (_sqrt(x + 1, y));
}
