#include<stdio.h>
main()
{
	int m;
	char str[100],str1[100];
	printf("Enter the string:");
	gets(str);
	printf("Enter the string1\n:");
	gets(str1);
	m=strcat(str,str1);
	puts(str);
}