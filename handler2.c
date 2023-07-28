#include "main.h"
/**
 * print_null - print "%" if format type NULL
 * @args: parameters
 *
 * Return: count
 */

int print_null(va_list args)
{
	int count = 0;

	(void)args;
	write(1, "%", 1);
	count ++;
	return (count);
}
