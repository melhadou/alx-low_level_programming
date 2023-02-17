#include <stdio.h>

/**
 * main - print alphabet in reverse order
 * Return: 0 in case of success
 */
int main(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
