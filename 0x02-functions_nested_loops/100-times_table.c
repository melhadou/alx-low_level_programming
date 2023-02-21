#include "main.h"

/**
	 * print_times_table - print the n times table
	 * @n: int n
	 * Return: void.
 */
void	print_times_table(int n)
{
	int r, c;
	int m = 0;

	if (n <= 15 && n >= 0)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				m = (r * c);
				if (m < 10)
				{
					if (c != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(m + '0');
				}
				else if (m < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m % 100) / 10) + '0');
					_putchar((m % 10) + '0');
				}
				if (c != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
