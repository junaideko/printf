#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * struct specifier - structure for format specifier
 * @str: name of specifier
 * @func: function pointer
 */
typedef struct specifier
{
	char str;
	int (*func)(va_list *);
} fmt_spec;

int _printf(const char *format, ...);
int (*get_func(char s))(va_list *);
int print_char(va_list *c);
int print_str(va_list *str);
char *_strcpy(char *dest, char *src);
char *_revstr(char *str);
char *_itoa(unsigned int arg_int, char *strout, int base);
char *__itoa(int arg_int, char *strout, int base);
int _strlen(char *str);
int print_int(va_list *p_int);
int print_uint(va_list *p_int);
int print_hex(va_list *p_int);
int print_oct(va_list *p_int);

#endif
