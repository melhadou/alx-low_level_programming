#include <stdio.h>

/**
 * main - print all alphabets
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
	
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
