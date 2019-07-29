#include "holberton.h"
/**
 * _printf - function to print any element in the alphabet
 * @format: string or elements to be print
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	va_list char_list;
	c_f selector[] = {
		{"c", f_character},
		{"s", f_string},
		{NULL, NULL}
	};

	va_start(char_list, format);
	for (; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			i++;
			j = 0;
			while (j < 2)
			{
				if (format[i] == selector[j].sp_char[0])
				{
					len += selector[j].f(char_list);
					break;
				}
				j++;
			}
		}
	}
	va_end(char_list);
	return (len);
}
