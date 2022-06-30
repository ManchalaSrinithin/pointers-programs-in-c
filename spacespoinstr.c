#include<stdio.h>
main()
{
	int i,l=0,j=0,k;
	char str[100],*stri,str1[100],*stri1;
	stri=str;
	stri1=str1;
	printf("Enter any string:");
	gets(str);
	for(i=0;*(stri+i)!=0;i++)
	{
		l++;
	}	
	for(i=0;i<=l;i++)
	{
		if(*(stri+i)==' ')
		{
			if(*(stri+i+1)==' ')
			{
			*(stri1+j)=' ';
			j++;	
			}
		}
		else
		{
			*(stri1+j)=*(stri+i);
			j++;
		}
	}
	*(stri1+j)='\0';
	puts(stri1);
	}