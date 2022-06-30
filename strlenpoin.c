#include<stdio.h>
main()
{
	int l=0,*l1;
	char str[100],*p;
	p=str;
	l1=&l;
	printf("Enter the string :");
	gets(str);
	while(*p!='\0')
	{
	    l++;
		p++;
	}
	printf("\nThe length of the string is :%d",*l1);
}
	