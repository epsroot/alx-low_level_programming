#include "main.h"



/**
 *_memset - this is a memory set function
 *@s: string
 *@b:  a character
 *@n: an integer
 *Return: a string
 */



char *_memset(char *s, char b, unsigned int n)

{

	unsigned int k;



	for (k = 0; k < n; k++)

		s[k] = b;



	return (s);

}
