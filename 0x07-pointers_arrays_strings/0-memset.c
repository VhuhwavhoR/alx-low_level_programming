#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * @b: constant byte
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n, int c)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
