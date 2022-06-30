#include<stdio.h>
main()
{
	int a[100],*p,n,i;
	printf("Enter the size of the elements");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(p+i));
		
	}
}