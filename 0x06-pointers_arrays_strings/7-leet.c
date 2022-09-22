#include "main.h"
/**
 **leet - encodes string to 1337
 *@s: string encoding
 *
 * Return: s
 */

char *leet(char *s)

{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[j] == *(s + i))
				*(s + i) = n[j];
		}
	}
	return (s);
}
