#include <stdio.h>

/**
 * main - print alphabetic except q and e
 * Return: 0 in case of success
 */
int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
