#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* p_string_arg - prints an argument of type char *
*
* @ap: argument of type va_list
*
* Return: count
*
*/

int p_string_arg(va_list ap)
{
	int count = 0, i = 0;
	char *s = va_arg(ap, char *);

	if (s == 0)
		return (p_string("(null)"));

	while (s[i] != 0)
	{
		count += p_char(s[i]);
		i++;
	}
	return (count);
}
