#include "holberton.h"
/**
 * f_integer - function that prints an string
 * @char_list: string to be print
 * Return: the lenght of the string
 */
int f_integer(va_list char_list)
{
	int i = 0;
	int aux = 0;
	int len = 0;
	int num = va_arg(char_list, int);
	char str[1024];

	if (num < 0)
	{
		num = num * (-1);
		_putchar('-');
		len = 1;
	}
	while (num)
	{
		aux = num % 10;
		str[i] = aux + 48;
		num = num / 10;
		i++;
	}
	str[i] = '\0';
	len += i;
	reverse_array(str, i);
	_puts(str);
	return (len);
}
