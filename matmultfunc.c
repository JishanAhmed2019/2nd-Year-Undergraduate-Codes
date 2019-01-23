#include<stdio.h>
void mul(int a[3][3],int b[3][3]);
int i,j;
int a[3][3];
int b[3][3];
int c[3][3];
void main()
{
 printf("Enter Matrix A:\n");
	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
			 scanf("%d",&a[i][j]);
		 }
	 }
	 printf("Enter matrix B:\n");
	 for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
			 scanf("%d",&b[i][j]);
		 }
	 }
	 mul(a,b);
}
void mul(int a[3][3],int b[3][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{			
printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

