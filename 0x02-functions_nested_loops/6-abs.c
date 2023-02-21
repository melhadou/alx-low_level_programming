#include "main.h"

/**
 * _abs - get absolute value of an integer.
 * @x: number 
 * Return: abs value, int
 */
int _abs(int x)
{
	if (x < 0)
	{
		x *= -1;
		return (x);
	}
	else
		return (x);
}
