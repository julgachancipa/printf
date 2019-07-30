#include "holberton.h"
/**
 * f_binary - function that prints an string
 * @char_list: arg to be print
 * Return: the lenght of the string
 */
int f_binary(va_list char_list)
{
        long num = va_arg(char_list, int);
        int len = 0;

        len = print_binary(num);
        return (len);
}
/**
 * print_binary - function that prints in binary
 * @num: num to be print
 * Return: the lenght of the printed chars
 */
int print_binary(long num)
{
        int len = 0;

        if (num / 2)
		len += print_binary(num / 2);
	if (num == 1)
	{
		_putchar(num + 48);
		len++;
	}
	else
	{
		_putchar((num % 2) + 48);
		len++;
	}
	return (len);
}
