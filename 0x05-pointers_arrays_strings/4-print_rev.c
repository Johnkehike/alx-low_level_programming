#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *
 * Print in reverse
 *
 */

void print_rev(char *s)
{
	char temp;
	int i, lenght, lastItem, firstItem;

	lenght=strlen(s);
	firstItem=0;
	lastItem=lenght-1;
	for(i=firstItem; i<=lastItem; i++)
	{
		temp=s[i];
		s[i]=s[lastItem];
		s[lastItem]=temp;
		lastItem--;
	}

}	
