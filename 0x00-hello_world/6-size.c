#include <stdio.h>

int main(void)
{
	int i;
	double d;
	char c;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c), "byte(s)");
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i), "byte(s)");
	printf("Size of a long int: %lu.\n", (unsigned long) sizeof(i), "byte(s)");
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(d), "byte(s)");
	printf("Size of a float: %lu.\n",(unsigned long)sizeof(i), "byte(s)");
        
	return(0);
}

	

