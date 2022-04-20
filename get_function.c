#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* *get_function - a function that returns a function of arg type valist
*
* @c: character argument
*
* AOCWCF means Array of Character constants With Corresponding Function
*
* va_list: argument type
*
* Return: 0
*/

int (*get_function(char c))(va_list)
{
	int i = 0;

	ptr_f AOCWCF[4] = {

				{'d', p_int_d},
				{'i', p_int_d},
				{'s', p_string_arg},
				{'c', p_char_arg}
			};

	while (i < 4)
	{

		if (c == AOCWCF[i].c)
			return (AOCWCF[i].f);
		i++;
	}
	return (0);
}
