#include "main.h"
/**
 **_strcat - char dest being concatenates with char src
 *@dest: string to concatenate by src
 *@src: string concatenated to dest
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = 0;

	return (dest);
}

