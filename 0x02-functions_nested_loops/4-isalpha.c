#include "main.h"

/**
 *_isalpha check alphabet character
 *@c: character to check
 *
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
