#include<stdio.h>
long int fact(int n);
  int main()
	 {
	    long int p;
       int m;
       printf("Enter number:\n");
       scanf("%ld",&m);
       p=fact(m);
       printf("%ld",p);
       }
  long int fact(int n)
     {
       long int q;
       if(n==1)
       return(1);
       else
       q=n*fact(n-1);
       return(q);
		return 0;
		   }
