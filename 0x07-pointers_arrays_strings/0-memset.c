#include "main.h"
/**
 * _memset -fills the first n bytes of the memory pointed by s withb
 * @s: address to be filled
 * @b: desired value
 * @n:number of bytes
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
