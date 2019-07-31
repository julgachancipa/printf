#include "holberton.h"
/**
 * f_string - function that prints an string
 * @char_list: string to be print
 * Return: the lenght of the string
 */
int f_rot13(va_list char_list)
{
	int i, j;
	int len = 0;
	int k = 0;
	char *str = va_arg(char_list, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				len++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
