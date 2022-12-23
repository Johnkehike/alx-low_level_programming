#include	"main.h"
/**
 * string_toupper -entyr
 * @ptr:this
 * description:
 * return:0
 *
 *
 *
 */
char *string_toupper(char *ptr)
{
	int a = 0;
	while (ptr[a])
	{
		if (ptr[a] >= 97 && ptr[a] <= 122)
		{
			ptr[a] -= 32;
		}

		a++;
	}
	return(ptr);
}
