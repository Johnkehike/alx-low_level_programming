#include <unistd.h>


/*
 *Comment-
 *
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
