#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check n is its positive or negative or null
 * Return: 0 in case of success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
