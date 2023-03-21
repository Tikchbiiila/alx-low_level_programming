#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check lowercase alphabets
 * @c: the char should be checked
 * Return:  1 to letters , 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
