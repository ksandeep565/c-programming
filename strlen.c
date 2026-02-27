#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int n;
	printf("\n enter a string:");
	gets(string);
	n=strlen(string);
	printf("\nthis contains %d characters",n);
	return 0;
	}
