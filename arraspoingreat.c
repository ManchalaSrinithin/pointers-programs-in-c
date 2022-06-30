#include<stdio.h>
main()
{
	int a[100],*a1[100],n,i,l=0;
	printf("Enter the size of the elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a1[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",a1[i]);
	}
	for(i=0;i<n;i++)
	{
		if(*(a1[i])>l)
		l=*a1[i];
	}
		printf("The greatest number is %d\n",l);	
}