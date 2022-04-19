#include "main.h"

/**
 * __itoa - convert int to alphabet
 * @arg_int: arguement int
 * @strout: string output
 * @base: base converted to
 * Return: pointer output string
 */
char *__itoa(int arg_int, char *strout, int base)
{
	char *str = strout;
	int digit, sign;

	sign = 0;
	if (arg_int < 0)
	{
		sign = 1;
		arg_int *= -1;
	}

	while (arg_int)
	{
		digit = arg_int % base;
		*str = (digit > 9) ? ('A' + digit - 10) : ('0' + digit);
		arg_int /= base;
		str++;
	}
	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	_revstr(strout);
	return (strout);
}

/**
 * print_int - print integer
 * @p_int: arguement int
 * Return: Length of the converted integer
 */
int print_int(va_list *p_int)
{
	int len;
	char tmp[20];

	int num = va_arg(*p_int, int);
	char *str = __itoa(num, tmp, 10);

	len = _strlen(str);
	write(1, str, len);

	return (len);
}
