#include<stdio.h>
char conc(char [ ],char[ ]);
main()
{
	char str[100],str1[100];
	printf("Enter the string:");
	gets(str);
	printf("Enter the another string:");
	gets(str1);
	conc(str,str1);
}
char conc(char str[ ],char str1[ ])
{
	int i,l=0,j,l1=0;
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
	printf("\nThe reverse of the string:%s",str1);
}