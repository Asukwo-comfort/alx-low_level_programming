#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase char
 * @c: ascii char to check
 *
 * Return: 1 if lowercase 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
