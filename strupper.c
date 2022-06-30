#include<stdio.h>
main()
{
	int i;
	char str[100];
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]>= 'a' && str[i]<= 'z')
	{
	str[i]=str[i]-32;
	}
	i++;
	}	
	printf("The string in upper case is %s",str);
	}
	
