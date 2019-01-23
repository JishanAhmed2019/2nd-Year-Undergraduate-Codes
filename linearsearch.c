#include<stdio.h>
void main()
       {
	 int i,a[50],n,loc=-1,search;
	 printf("Number of Integer:\n");
	 scanf("%d",&n);
	 printf("Enter number:\n");               /*linear searech*/

	    for(i=0;i < n;i++)                  
	 scanf("%d",&a[i]);
	 printf("Enter Item:\n");
	 scanf("%d",&search);
	    for(i=0;i < n;i++)
	    {
	      if(a[i]==search)
	      {
		loc=i;
	      break;
		}
		  }
	       if(loc==-1)
	     printf("not found");
	     else
	     printf("%d found at location: %d",search,loc);
	      } 


