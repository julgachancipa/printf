#include "holberton.h"
/**
 * f_reverse - function that prints an string
 * @char_list: string to be print
 * Return: the lenght of the string
 */
int f_reverse(va_list char_list)
{
	char *str = va_arg(char_list, char *);
	int len = 0;
	int i = 0;

	for ( ; str[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
