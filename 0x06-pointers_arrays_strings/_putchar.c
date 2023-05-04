#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character being printed
 * Return: if success is 1
 * if error occurs 1 is outputed and error number is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
