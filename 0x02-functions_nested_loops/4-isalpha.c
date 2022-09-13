#include "main.h"

/**
 *
 *Description: int _isalpha check alphabet character
 *character to check
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
