#include<stdio.h>
#include<math.h>
void main()
	 {                                                       /*check prime*/
	   int i,n;
	   printf("Enter number:\n");
	   scanf("%d",&n);
	   for(i=2;i <= sqrt(n);i++)
	      {
		 if((n%i)==0)
		    {
		      printf("not prime");
		      break;
		      }
		      else
		      continue;
		         }
			if(i > sqrt(n))
			printf("prime");
			}  


