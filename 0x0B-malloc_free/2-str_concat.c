#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **str_concat - concatenates two strings
 *@s1: first string to concatenate
 *@s2: second string to concatenate
 *
 *
 *Return: ar
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size_s1 = 0, size_s2 = 0;
	char *ar;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[size_s1])
		size_s1++;
	while (s2[size_s2])
		size_s2++;
	ar = malloc((size_s1 + size_s2) * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		ar[i] = s1[i];
		i++;
	}
	while (*(s2 + j))
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	ar[i] = '\0';
	return (ar);
}
