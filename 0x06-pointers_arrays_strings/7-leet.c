#include	"main.h"


/**
 * comment - for encoding string
 *
 *
 */
char *leet(char *str)
{
	int i, temp;
	char first[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char second[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (str[i])
	{
		for (temp = 0; temp < 10; temp++)
		{
			if (str[i] == first[temp])
			{
				str[i] = second[temp];
			}
		}
		i++;
	}
	return (str);
}
