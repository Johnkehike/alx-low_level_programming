#include <stdio.h>

int main()
{
	int ch;

	for(ch='z'; ch>='a'; --ch){
		putchar(ch);
	}
	putchar('\n');
}
