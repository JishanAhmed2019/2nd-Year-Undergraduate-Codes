#include<stdio.h>
void main()
      {
	int a,b,c,p,r,lcm;
	printf("Enter input:\n");
	scanf("%d %d",&a,&b);
	p=a*b;
	if(a > b)
	{                                                    /*lcm*/
	  c=a;
	  a=b;
	  b=c;
	  }
	while((a%b)!=0)
	{
	   r=a%b;
	   a=b;
	   b=r;
	   }
	   lcm=p/b;
	   printf("%d",lcm);
           } 

