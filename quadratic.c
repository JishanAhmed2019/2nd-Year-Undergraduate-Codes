#include<stdio.h>
#include<math.h>
  int main()
	 {
	   int a,b,c,d;
	   float p,q;
	   scanf("%d %d %d",&a,&b,&c);
	   d=b*b-4*a*c;
	      if(d < 0)
	   printf(" Roots are complex");
	      else
	      {
		printf(" Roots are real &equal\n");
		p=(-b+sqrt(d))/(2*a);
		q=(-b-sqrt(d))/(2*a);
		printf("Root:p=%f\nRoot:q=%f",p,q);
		}
		return 0;
		   }
