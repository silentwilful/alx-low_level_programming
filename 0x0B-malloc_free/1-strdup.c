#include "main.h"
#include <stdlib.h>
/**
 **_strdup - copy string a newly allocated space
 *@str: string to copy
 *
 *
 *Return: NULL
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ar;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);
	while (j <= i)
	{
		ar[j] = str[j];
		j++;
	}
	return (ar);
}
