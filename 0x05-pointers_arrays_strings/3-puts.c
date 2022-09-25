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

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
