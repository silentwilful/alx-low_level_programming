#include "main.h"
/**
 **_strncat - concatenates two strings using null byte
 *@dest: appended by src without terminating null byte
 *@src: concatenated to dest
 *@n: src sum of bytes
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len1 = 0;

	while (*(dest + len) != '\0')

	{
		len++;
	}
	while (len1 < n)
	{
		*(dest + len) = *(src + len1);
		if (*(src + len1) == '\0')
			break;
		len++;
		len1++;
	}
	return (dest);
}
