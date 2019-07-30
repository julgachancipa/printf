#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#define MAX 1024

int _putchar(char c);
void _puts(char *str);
char *_strcat(char *dest, char *src);
int _printf(const char *format, ...);
int _strlen(char *s);
int f_character(va_list char_list);
int f_string(va_list char_list);
int f_integer(va_list char_list);
int f_binary(va_list char_list);
void reverse_array(char *a, int n);
int print_integer(long num);
int print_binary(unsigned int num);
/**
 * struct call_function - character and function
 * @sp_char: character that specifies the
 * format of the variable that will be printed.
 * @f: function that returns the variable in a
 * string with the new format.
 *
 * Description: match the char with the function
 */
typedef struct call_function
{
	char *sp_char;
	int (*f)();
} c_f;

#endif
