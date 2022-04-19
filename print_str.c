#include "main.h"

/**
 * print_str - prints a string
 * @str: pointer to string
 * Return: length of the string
 */
int print_str(va_list *str)
{
	/* innitialize counter and len */
	char *newstr = NULL;
	int len = 0;

	char *s = va_arg(*str, char *);
	/* length of str */
	len = _strlen(s);
	/* Dnyamically allocate memory to our newstr */
	newstr = _strcpy(newstr, s);

	write(1, s, len);
	/* free heap memory */
	free(newstr);
	/* return length of newstr */
	return (len);
}
