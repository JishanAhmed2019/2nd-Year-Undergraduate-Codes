#include<stdio.h>
void main()
	{
	  int n,a,b,i,c;
	  printf("Enter input:\n");
	  scanf("%d %d",&a,&b);
	  if(a > b)                     
	  {                                        /*gcd */
	    c=a;
	    a=b;
	    b=c;
              }
	  while(a!=0)
	  {
	    c=b%a;
	    b=a;
	    a=c;
	    }
	  printf("%d",b);
	  }
