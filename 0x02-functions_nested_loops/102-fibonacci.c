#include <stdio.h>

/**
 * main - print fibonacci
 * Return: always 0
 *
 */

int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = 3;

	printf("%ld, ", a);
	printf("%ld, ", b);
	printf("%ld, ", a);
	{
		printf("%ld, ", a);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", c);
	return (0);
}
