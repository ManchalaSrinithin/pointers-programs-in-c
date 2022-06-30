#include<stdio.h>
main()
{
	int i,*p[100],a[100],n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
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
	
}