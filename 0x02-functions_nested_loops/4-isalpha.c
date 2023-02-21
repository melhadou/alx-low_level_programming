#include "main.h"

/**
 * _isalpha - check if a character is alpha.
 * @c: character
 * Return: 1 if @c is lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
