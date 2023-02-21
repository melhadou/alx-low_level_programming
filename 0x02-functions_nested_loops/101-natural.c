 #include <stdio.h>

/**
 * main - prints the sum of all natural numbers to 1024
 * Return: res, int.
 */
int	main(void)
{
	int m;
	int res;

	m = 0;
	res = 0;
	while (m < 1024)
	{
		if (m % 3 == 0 || m % 5 == 0)
			res += m;
		m += 1;
	}
	printf("%d\n", res);
	return (0);
}
