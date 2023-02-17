#include <stdio.h>

/**
	* print_numbers - print comb of 4
	* @n1: first number
	* @n2: second number
	* @n3: third number
	*/
void	print_numbers(int n1, int n2, int n3)
{
	putchar(n1);
	putchar(n2);
	putchar(n3);
	if (n1 < '7')
	{
		putchar(',');
		putchar(' ');
	}
}

/**
	* main - print comb of 4
	* Return: 0 in success
	*/
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_numbers(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
