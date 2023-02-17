#include <stdio.h>

/**
 * main - print numbers
 * Return: 0 in case of success
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
