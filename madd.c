//matrix addition
#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
	int m1[MAX][MAX],m2[MAX][MAX],p[MAX][MAX],i,j,k,r1,c1,r2,c2;
	printf("Enter the order of first matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the order of second matrix: ");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Matrix multiplication not defined");
	}
	else
	{
		printf("Enter elments of first %d*%d matrix:\n",r1,c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&m1[i][j]);
			}
		}
		printf("Enter elments of second %d*%d matrix:\n",r2,c2);
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&m2[i][j]);
			}
		}
		//product begin
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				p[i][j]=0;
				for(k=0;k<c1;k++)
				{
					p[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
		printf("First matrix is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%6d",m1[i][j]);
			}
			printf("\n");
		}
		printf("second matrix is\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%6d",m2[i][j]);
			}
			printf("\n");
		}
		printf("product matrix is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%6d",p[i][j]);
			}
			printf("\n");
		}
	}
	getch();
}
