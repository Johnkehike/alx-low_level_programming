#include	"main.h"
/**
 * _islower- Checks for lowercase
 *
 * description: 'make character c is lower'
 *
 * Return: return
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
