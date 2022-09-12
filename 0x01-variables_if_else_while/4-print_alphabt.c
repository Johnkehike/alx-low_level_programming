#include <stdio.h>

void main()
{
	int a='a';

	for(a<='z'; a!='q'; a!='e'){
		putchar(a);
		++a;
	}
	putchar('\n');

}

