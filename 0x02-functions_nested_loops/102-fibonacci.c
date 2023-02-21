#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: int.
 */
int	main(void)
{
	long i;
	long j;
	long fib;
	int n;

	i = 0;
	j = 0;
	n = 0;

	while (n < 50)
	{
		fib = j + i;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
