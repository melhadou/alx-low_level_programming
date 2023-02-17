#include <stdio.h>

/**
	* print_numbers - print comb of 5
	* @n1: first number
	* @n2: second number
	*/
void	print_numbers(int n1, int n2)
{
	putchar((n1 / 10) + '0');
	putchar((n1 % 10) + '0');
	putchar(' ');
	putchar((n2 / 10) + '0');
	putchar((n2 % 10) + '0');
	if (n1 < 98)
	{
		putchar(',');
		putchar(' ');
	}
}

/**
	* print_numbers - print comb of 5
	* Return: 0 in success
	*/
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_numbers(n1, n2);
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
