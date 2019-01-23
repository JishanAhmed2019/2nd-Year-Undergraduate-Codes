#include<stdio.h>
void fibb(int i,int j);                                                   /*fibb series funct*/
int c,n,s,a;
void main()
      {
	a=1;
	c=2;                          
        printf("Enter input:\n");
	scanf("%d",&n);
        printf("%d %d",a,a);
	fibb(a,a);
	}
void fibb(int i,int j)
	{
	 if(c==n)
	 return;
	 else
	 {
	  c++;
	   s=i+j;
       
	  printf(" %d",s);
	  fibb(j,s);
	  }
             }
