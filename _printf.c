#include "holberton.h"
/**
 * _printf - function to print any element in the alphabet
 * @format: string or elements to be print
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0, len = 0;
	va_list char_list;
	c_f selector[] = { {"c", f_character},
		{"s", f_string}, {NULL, NULL} };

	va_start(char_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else if ((format[i] == '%' && format[i + 1] == '%') ||
			 (format[i] == '%' && format[i + 1] == '\n'))
		{
			_putchar('%');
			if (format[i + 1] == '\n')
				_putchar('\n');
			i++;
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
				}
				j++;
			}
		}
	}
	va_end(char_list);
	return (len);
}
