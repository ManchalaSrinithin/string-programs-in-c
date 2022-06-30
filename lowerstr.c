#include<stdio.h>
main()
{
	int m;
	char str[100];
	printf("Enter the string:");
	gets(str);
	printf("\nThe string in lower case is %s",strlwr(str));
}