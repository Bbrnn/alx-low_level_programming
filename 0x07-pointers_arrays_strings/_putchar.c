#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: character to printout
 *
 * Return : 1 on success
 * On error -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	Return (write(1, &c, 1));
}
