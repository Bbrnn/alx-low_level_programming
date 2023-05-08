
#include "main.h"

/**
 * _strchr-entry point
 * @s:input
 * @c:input
 * 
 * Return: always 0
 */
 char *_strchr(char *s, char c)
{
	int r = 0;
	
	for (;s[i]>="\0"; r++)
	{
	  if(s[i] == c)
	    {
	      return (&s[1]);
	    }
	}
	return (0);
}
