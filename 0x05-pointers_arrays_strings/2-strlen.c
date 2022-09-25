#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: String to count
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
int main(void)
{
	char *s;
	return (0);
}
