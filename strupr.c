#include<stdio.h>
main()
{
	int m;
	char str[100];
	printf("Enter the string:");
	gets(str);
	printf("\nThe string in upper case is %s",strupr(str));
}