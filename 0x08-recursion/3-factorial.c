#include "main.h"
/**
 *factorial - returning a factorial of given number
 *@n: check number
 *
 *Return: factorial n or -1
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		if (n == 0)
			return (1);
		else
			return (-1);
	}
}
