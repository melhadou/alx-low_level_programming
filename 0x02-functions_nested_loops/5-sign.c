#include "main.h"

/**
 * print_sign - check signe of a number
 * @n: The input number to check
 * Return: 1 is postive, 0 is zero, -1 is negative
 */
int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
