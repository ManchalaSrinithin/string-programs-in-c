#include<stdio.h>
char len(char []);
main()
{
	int z;
	char le[100];
	printf("Enter any string:");
	gets(le);
	z=len(le);
	printf("length of the string is:%d",z);
}
char len(char le[ ])
{
	int l=0,i;
	for(i=0;le[i]!=0;i++)
	{
		l++;
	}
	return l;
}