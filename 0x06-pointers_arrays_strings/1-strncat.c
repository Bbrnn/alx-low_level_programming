#include "main.h"
/**
 * _strncat -it concantenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be concantenated
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_string, z;
/*length_string is the legnth of the destination string*/

	length_string = 0;
	while (dest[length_string] != '\0')
{
	length_string++;
}
	for (z = 0; z < n && src[z] != '\0'; z++, length_string++)
{
	dest[length_string] = src[z];
}
	dest[length_string] = '\0';
	return (dest);
}
