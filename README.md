My Custom _printf.
The _printf function is a custom implementation of the printf function in C. It provides a simple way to format and print output to the standard output stream. This custom printf function allows you to print strings, characters, integers, and the percent symbol.

Format Specifiers
The following format specifiers are supported by the custom printf function:

%c: Print a character.
%s: Print a null-terminated string.
%d or %i: Print a signed decimal integer.
%%: Print a percent symbol.
Any other character preceded by a percent symbol will be treated as a literal percent symbol. For example, %% in the format string will be printed as %.

Return Value
The _printf function returns the number of characters printed (excluding the null byte). This can be useful for counting the length of the output.