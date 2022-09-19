#include "main.h"

/**
 *_strlen - returns the  length of string
 *@s: length string
 *
 *
 *Return: c length
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c))
		c++;
	return (c);
}

