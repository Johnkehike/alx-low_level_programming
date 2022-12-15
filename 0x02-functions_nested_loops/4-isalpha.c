#include	"main.h"
/**
 * _isalpha - entry
 *
 * @c: main char to check
 *
 * description:
 *
 * Return: always drop a return
 *
 *Comment - checking for alphabetic characters
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
