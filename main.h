#ifndef HEADER
#define HEADER

#include <stdarg.h>
/**
 * struct ptr_to_function - a struct to aid function selection based on
 * c value
 * @c: char to check to return corresponding function
 * @f: function to return
 */
typedef struct ptr_to_function
{
	char c;
	int (*f)(va_list);
} ptr_f;
int p_char(char c);
int p_string(const char *s);
int p_uint(unsigned int a);
int p_char_arg(va_list ap);
int p_string_arg(va_list ap);
int p_int_d(va_list ap);
int check_string(const char *c);
int check_next_char(const char *c);
int (*get_function(char c))(va_list);
int _printf(const char *format, ...);

#endif
