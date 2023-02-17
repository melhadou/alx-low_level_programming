#include <stdio.h>

/**
 * main - print all lowercase alphabets
 * Return: 0 in case of success
 */
int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
