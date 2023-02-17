#include <stdio.h>

/**
 * main - print base 16
 * Return: 0 in case of success
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 15)
	{
		putchar("0123456789abcdef"[a % 16]);
		a++;
	}
	putchar('\n');
	return (0);
}
