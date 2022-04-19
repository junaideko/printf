#include "printf.h"
/**
 * print_uint - prints unsigned interger
 * @va_list: argument list
 * @p_int: pointer to int
 * Return: length of int
 */

int print_uint(va_list *p_int)
{
	int len;
	char tmp[20];
	unsigned int num = va_arg(*p_int, unsigned int);
	char *str = _itoa(num, tmp, 10);

	len = _strlen(str);
	write(1, str, len);
	return (len);
}
