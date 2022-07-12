#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the string
 * @s: char input
 *
 * Return : void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
