#include<stdio.h>
main()
{
	int i,l=0,j=0,k;
	char str[100],str1[100];
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(i=0;i<=l;i++)
	{
		if(str[i]==' ')
		{
			if(str[i+1]==' ')
			{
			str1[j]=' ';
			j++;	
			}
		}
		else
		{
			str1[j]=str[i];
			j++;
		}
	}
	str1[j]='\0';
	puts(str1);
	}