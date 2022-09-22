#include <stdio.h>
#include "main.h"
/**
 **string_toupper - reverse of a string
 *@s: the string that recieves
 *Return: 1 success
 */
char *string_toupper(char *s)
{
	int pt = 0;

	while (s[pt++])
	{
		if (s[pt] >= 'a' && s[pt] <= 'z')
			s[pt] -= 32;
	}

	return (s);
}
