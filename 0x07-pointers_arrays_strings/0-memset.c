#include "main.h"
#include <stdio.h>

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
	int i = 0;

	for (n>0; i++)
{
	s[i] = b;
	n --;
}
	return (s);
}
