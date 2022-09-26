#include "main.h"
/**
 **_memset - memory filling with constant byte
 *@s: pointer
 *@b: constant byte
 *@n: required value to fill
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}

	return (s);
}
