#include "main.h"
/**
 **_strstr - locating a substring
 *@needle: substring to find in haystick
 *@haystack: check string
 *
 *Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;


		while (*haystack && *pattern && *haystack == *pattern)
	{
		haystack++;
		pattern++;
	}

		if (!*pattern)
		{
			return (Begin);
		}
	haystack = Begin + 1;
	}
	return (0);
}
