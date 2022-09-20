#include "main.h"
#include <stdio.h>

int _isupper()
{
	    char c;
	   

   	  	if(c == 'A'){
			if(c =='a'){
   	  	printf("%c: %d\n", c, _isupper(c));
			}
		printf("%c: %d\n", c, _isupper(c));
		}
		return(0);
}
