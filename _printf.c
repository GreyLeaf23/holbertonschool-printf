#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - print anything
 * @format: constant
 * Return: count
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;
	int count = 0;
	va_list args;

	f_t f_types[] = {
		{'c', &print_char},
		{'i', &print_int_i},
		{'d', &print_int_d},
		{'%', &print_percent},
		{'s', &print_str},
		{NULL, NULL}
	};
	va_start(args, format);
	if (format[i] != '%')
	{
		write(1, &format[i], 1);
		count++;
	}
	else
	{
		for (i = 0; format != NULL && format[i]; i++)
		{
			j = 0;
			for (j = 0; j < 5; j++)
			{
				if (format[i] == *f_types[j].id)
					count += f_types[j].f(args);
			}
		}
	}
	va_end(args);
	printf("\n");
	return (count);
}
