#include "holberton.h"
/**
 * f_octal - function that prints in hexa lowercase format
 * @char_list: arg to be print
 * Return: the lenght of the string
 */
int f_octal(va_list char_list)
{
	long num = va_arg(char_list, int);
	char Representation[] = "01234567";
	char buffer[1024];
	char *ptr;
	int len = 0;

	ptr = &buffer[1023];
	*ptr = '\0';
	do {
		*--ptr = Representation[num % 8];
		num /= 8;
		len++;
	} while (num != 0);
	_puts(ptr);
	return (len);
}
