#include "printf.h"
/**
 * print_oct - function to print octadecimal
 * @va_list: argument list
 * @p_int: pointer to int
 * Return: return length
 */

int print_oct(va_list *p_int)
{
	int len;
	char tmp[20];
	unsigned int num = va_arg(*p_int, unsigned int);

	char *str = _itoa(num, tmp, 8);
	len = _strlen(str);
	write(1, str, len);
	return (len);
}
