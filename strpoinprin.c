#include<stdio.h>
main()
{
	int i,n;
	char str[100],*p;
	printf("Enter the string :");
	p=str;
	gets(str);
	printf("charecter by charecter of the string:");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",*(p+i));
		printf("\n");
	}
	
}