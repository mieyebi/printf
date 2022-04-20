#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
* p_char_arg - prints to stdoutput different arg types
*
* @ap: variable of type va_list
*
* Return: a p_char function
*/

int p_char_arg(va_list ap)
{
	char c = va_arg(ap, int);

	return (p_char(c));
}
