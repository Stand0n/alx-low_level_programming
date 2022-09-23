#include "main.h"
/**
 * print_alphabet_x10 - function to pribt abc
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	char alpha, co;

	for (co = 0; co <= 9; co++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
