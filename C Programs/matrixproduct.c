#include<stdio.h>
void main()
{
	int i,j,k,r1,c1,r2,c2,a[10][10],b[10][10],c[10][10];
	printf("Enter the no. of rows and columns of matrix 1 : ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the no. of rows and columns of matrix 2 : ");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter the matrix 1\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the matrix 2\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("Product of matrices\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Matrix multiplication not possible");
	}
}
