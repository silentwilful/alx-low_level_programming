#include "main.h"
/**
 *rev_string - reversing a string
 *@s: reverses a string
 *
 *Return: 0
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char str;

	while (*(s + b))
		b++;
	b--;
	while (a < b)
	{
		str = *(s + b);
		*(s + b) = *(s + a);
		*(s + a) = str;
		b++;
		b++;
	}
}
