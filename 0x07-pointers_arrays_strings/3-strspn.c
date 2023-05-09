#include "main.h"
/**
 * _strspn -gets the length of a prefix substring.
 * @s:string to be searched
 * @accept: prefix to be measured
 *
 * Return: Returns  s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				bytes++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (0);
}
