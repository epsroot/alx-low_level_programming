#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a reverse string
 * @s: char input
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
