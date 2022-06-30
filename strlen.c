#include<stdio.h>
main()
{
	char str[100];
	printf("Enter any string:");
	gets(str);
	printf("length of the string:%d\n",strlen(str));
}