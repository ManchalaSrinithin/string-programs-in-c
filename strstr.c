#include<stdio.h>
main()
{
	int m;
	char str[100],str1[100];
	printf("Enter the string:\n");
	gets(str);
	printf("Enter the string1:\n");
	gets(str1);
	m=strstr(str,str1);
	if(m!=0)
	printf("\nsub string is present");
	else
	printf("\nsub string is not present");
}