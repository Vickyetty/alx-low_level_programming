#include <stdio.h>
#include "main"

/**
 * _putchar-writes the character c to stdout
 * @c.Ther character to print 
 * Return: on Success A.
 * on error, -1 is returned and errno is set appropriately
 */
int _outchar(char c)
{
	return(write (1,&c,1));
}
