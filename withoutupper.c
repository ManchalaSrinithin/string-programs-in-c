#include<stdio.h>
main()
{
	int i,l=0,j=0,k,l1=0;
	char str[100],str1[100];
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(i=0;i<l;i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>=0&&str[i]<=9)
		{
			str1[j]=str[i]-32;
			j++;
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			str1[j]=str[i]+32;
			j++;
		}
		else if(str[i]==' ')
		{
			str1[j]=' ';
			j++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			str1[j]=str1[i]+48;
			j++;
		}
	}
	str1[j]='\0';
	puts(str1);

	}
	
