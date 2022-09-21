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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	j = 0;

	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return  (dest);
}
