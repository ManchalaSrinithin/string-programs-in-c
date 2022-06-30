#include<stdio.h>
main()
{
	int m;
	char str[100],str1[100];
	printf("Enter the string:");
	gets(str);
	strcpy(str1,str);
	strrev(str1);
	m=strcmp(str,str1);
	if(m==0)
	printf("\nBoth strings are equal");
	else
	printf("\nboth are not equal");
}