#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: string to print
 * Return: nothing
 */
void _puts(char *str)
{
	if (*str == '\0')
		return;
	_putchar(*str);
	_puts(str + 1);
}
