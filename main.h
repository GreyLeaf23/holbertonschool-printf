#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char);
int _printf(const char *format, ...);

/**
 * struct format_types - struct used to define function
 * @id: stuff
 * @f: pointer to function
 */

typedef struct format_types
{
char *id;
void (*f)(const char *format, va_list args);
} f_t;

void print_char(const char *format, va_list args);
void print_int_i(const char *format, va_list args);
void print_int_d(const char *format, va_list args);
void print_f(const char *format, va_list args);
void print_str(const char *format , va_list args);

#endif
