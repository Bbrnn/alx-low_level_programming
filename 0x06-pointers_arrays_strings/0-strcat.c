#include "main.h"
/**
 * _strcat -its supposed to concantenate two strings
 * @dest: the destination string
 * @src: the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length_string, z;

	length_string = 0;
	while (dest[length_string] != '\0')
{
	length_string++;
}
	for (z = 0; src[z] != '\0'; z++, length_string++)
{
	dest[length_string] = src[z];
}
	dest[length_string] = '\0';
	return (dest);
}
