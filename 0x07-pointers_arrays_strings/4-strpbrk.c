# include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string
 *@s:string to be searched
 *@accept:set of byte to be searched
 *
 * Return:Returns a pointer to s
 *if no set is matched-NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
		if (*s == accept[f])
			return (s);
		}

		s++;
	}
	return ('\0');
}
