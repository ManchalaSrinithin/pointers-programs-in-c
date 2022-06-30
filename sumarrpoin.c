#include<stdio.h>
main()
{
	int a[100],*p,n,i,sum=0;
	printf("Enter the size of the elements");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
		printf("The sum of the array elements is %d\n",sum);	
}