#include "holberton.h"
/**
 * f_hexa_uc - function that prints in hexa lowercase format
 * @char_list: arg to be print
 * Return: the lenght of the string
 */
int f_hexa_uc(va_list char_list)
{
	long num = va_arg(char_list, int);
	char Representation[] = "0123456789ABCDEF";
	char buffer[1024];
	char *ptr;
	int len = 0;

	ptr = &buffer[1023];
	*ptr = '\0';
	do {
		*--ptr = Representation[num % 16];
		num /= 16;
		len++;
	} while (num != 0);
	_puts(ptr);
	return (len);
}
