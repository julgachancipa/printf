#include "holberton.h"
/**
 * _printf - function to print any element in the alphabet
 * @format: string or elements to be print
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j, flag = 0, len = 0;
	va_list char_list;
	c_f selector[] = { {"c", f_character}, {"s", f_string},
			   {"d", f_integer}, {"i", f_integer}, {NULL, NULL} };

	va_start(char_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			len += _putchar('%');
			i++;
		}
		else
		{
			for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == selector[j].sp_char[0])
				{
					len += selector[j].f(char_list);
					i ++;
					flag++;
					break;
				}
			}
			if (flag == 0)
				len += _putchar(format[i]);
		}
	}
	va_end(char_list);
	return (len);
}
