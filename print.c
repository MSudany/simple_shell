#include "shell.h"


/**
 * _putchar - prints char c
 * @c: char to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print - prints a string
 * @str: string to print
 *
 * Return: void
 */
void _print(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}
