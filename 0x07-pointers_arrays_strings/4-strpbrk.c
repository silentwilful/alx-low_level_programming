#include "main.h"
/**
 **_strpbrk - searching a string for any set of bytes
 *@s: string to be searched
 *@accept: string to be checked against
 *
 *Return: pointer to te byte that matches on eof the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return (NULL);
}
