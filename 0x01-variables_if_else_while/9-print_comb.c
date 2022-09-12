#include <stdio.h>

int main()
{
	int a;
	char str2[15];
	strcpy(str2, ", ");

	for(a='0'; a<='9'; ++a)
	{
		puts(a);
		puts(str2);
		
	}
		/*putchar(', ');*/
		return(0);
	
}
