DATE
	20 - APRIL - 2022

TITLE
	_printf FUNCTION
 

DESCRIPTION

	ALX software engineering: A _printf function created to print to the standard output

	The _printf function is a similitude of standard printf in c programming language
	which readily prints different input formats with valid format specifiers.


	#format_specifiers

	these are characters that specify what to be printed to stdout from the next argument. valid format_specifiers are: 
	{
		%d -> int specifiers
		%c -> char specifier
		%s -> string specifier
		%i -> int specifier
	}
	to the standard output.

	
	The _printf function takes the format:

	*** int _printf(const char *format_string [%format_specifier], ...); ***

	and returns the number of characters printed, excluding the null byte at the end a string.


EXAMPLE
		int a = 0;
		_printf("the output of a is %d" a);


	OUTPUT
		the output of a is 0
	
AUTHORS
Isyaku Yusuf
Wilson Diana
