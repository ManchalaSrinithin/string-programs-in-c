#include<stdio.h>
main()
{
	int i=0,l=0;
	char str[100],str1[100];
	printf("Enter any string:");
	gets(str);
	printf("Enter any string:");
	gets(str1);
	for(i=0;str1[i]!=0;i++)
	{
		l++;
	}	
	for(i=0;str[i]!='\0';i++)
	{	
		str1[l]=str[i];
		l++;
	}
	str1[l]='\0';
	puts(str1);
	
}
        
	
