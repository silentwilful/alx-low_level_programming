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
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}

	return (s);
}
