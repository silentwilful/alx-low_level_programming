#include "main.h"
/**
 *absolute fuction - outputs absolute value
 *@n: int check
 *
 *Return: n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}
