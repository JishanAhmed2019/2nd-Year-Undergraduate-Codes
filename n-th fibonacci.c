#include<stdio.h>
void fibb(int i,int j);
int c,n,s,a;
  int main()
	 {
	    a=1;
	c=2;                                      /*n-th fibb funct*/
        printf("Enter input:\n");
	scanf("%d",&n);
	fibb(a,a);
        printf("%d",s);
	}
void fibb(int i,int j)
	{
	 if(c==n)
	 return;
	 else
	 {
               c++;
	   s=i+j;      
	  fibb(j,s);
          }
		//return 0;
		   }
