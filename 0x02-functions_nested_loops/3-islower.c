#include "main.h"

/**
 * _islower - check lowercase alphabets
 * @c: the char should be checked
 * Return:  1 to lowercases , 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
