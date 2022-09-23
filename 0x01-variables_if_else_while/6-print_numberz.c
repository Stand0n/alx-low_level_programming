#include <stdio.h>
#include <stdlib.h>
/**
 * main – prints numbers from 0 to 9
 * only using putchar and without char variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
