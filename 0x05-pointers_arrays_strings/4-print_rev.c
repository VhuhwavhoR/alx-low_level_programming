#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 * @s: string to print
 * @s: string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
