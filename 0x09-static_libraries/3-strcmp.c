#include "main.h"
/**
 *_strcmp - function that compares two strings using strcp
 *@s1: first string
 *@s2: second string
 *
 *Description: if s1 is equal to s2
 * Return: comparison output of a=b
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;


	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
