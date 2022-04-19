#include "main.h"
/**
 * _revstr - reverse a string
 * @str: pointer to string
 * Return: string
 */

char *_revstr(char *str)
{
	int i, len;
	char ch;

	len = 0;
	if (!str)
		return (NULL);
	while (str[len] != '\0')
		len++;
	for (i = 0; i < (len / 2); i++)
	{
		ch = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = ch;
	}
	return (str);
}
