#include <stdio.h>

/**
	* print_numbers - print comb of 3
	* @n1: first number
	* @n2: second number
	*/
void	print_numbers(int n1, int n2)
{
	putchar(n1);
	putchar(n2);
	if (n1 < '8')
	{
		putchar(',');
		putchar(' ');
	}
}

/**
	* main - print comb of 3
	* Return: 0 in success
	*/
int	main(void)
{
 	int a;
	int	b;

	a = '0';
	b = '1';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			print_numbers(a, b);
			b++;
		}
		a++;
	}
	return (0);
}
