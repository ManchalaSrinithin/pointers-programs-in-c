#include<stdio.h>
main()
{
	int a[100][100],i,j,m,n;
	int *p1;
	p1=&a[0][0];
	printf("Enter no.of rows and columns in I-matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter %dX%d matrix values are:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p1+(i*m+j));
		}
		printf("\n");
	}
	printf("matrix values are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(p1+(i*m+j)));
		}
		printf("\n");
	}
	printf("transposed matrix values are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",*(p1+(j*m+i)));
		}
		printf("\n");
	}

}