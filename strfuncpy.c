#include<stdio.h>
int copy(int str[ ],int str1[ ]);
main()
{
	char str1[100],i,str[100];
	printf("Enter any string:");
	gets(str);
	copy(str,str1);
}
int copy(int str[ ],int str1[ ])
{
	char i;
	for(i=0;str[i]!='\0';++i)
	{
		str1[i]=str[i];
	}	
	str1[i]='\0';
	printf("The copied string is %s\n",str1);
}