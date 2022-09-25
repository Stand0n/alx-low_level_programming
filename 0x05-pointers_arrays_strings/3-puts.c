#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _puts - Prints a string.
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
