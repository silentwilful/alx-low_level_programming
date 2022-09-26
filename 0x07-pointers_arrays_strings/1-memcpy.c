#include "main.h"
/**
 **_memcpy - copying memory area
 *@src: memory to copy to
 *@dest: memery to copy from
 *@n: number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
