#include<stdio.h>
main()
{
	int i,l=0,j,l1=0;
	char str[100],str1[100];
	printf("Enter the string:");
	gets(str);
	printf("Enter the second string:");
	gets(str1);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(j=0;str1[j]!=0;j++)
	{
		l1++;
	}	
	for(i=0;i<=l;i++)
	{
		for(j=0;j<l1;j++)
		{
			if(str[i+j]!=str[j])
			{
			break;
			}
			
		}
		if(j==l1)
		flag=1;
		else
		{
		flag=0;
		break;
		}
	}
	if(flag==1)
	printf("The sub string is not present\n");
	else
	printf("The sub string is  present\n");
	}
        
	
