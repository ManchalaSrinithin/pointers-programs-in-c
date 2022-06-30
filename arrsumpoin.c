#include<stdio.h>
main()
{
	int i,*p[100],a[100],n,*s,s1=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	s=&s1;
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",p[i]);
	}
	printf("The values are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*p[i]);
		printf("\n");
	}
	printf("Sum of the array values are:");
	for(i=0;i<n;i++)
	{
		*s=*s+*p[i];
	}
	printf("\n%d",*s);
}