#include "main.h"
/**
 *_strchr - locating a character in a string
 *@c: character to derive
 *@s: the string
 *
 *Return: on success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
