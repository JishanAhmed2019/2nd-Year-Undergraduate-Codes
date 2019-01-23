#include<stdio.h>
void bsort(int a[5]);
void main()
      {
	int i,b[5];
	                                     
        printf("Enter number:\n");

	  for(i=0;i <5;i++)

	scanf("%d",&b[i]);
	bsort(b);
	}                                                     /*descd*/
void bsort(int a[5])
      {
	int pass,m,r;

	for(pass=1;pass <= 4;pass++)
         {
	   m=0;
          while(m <= 4-pass)

	  {
	    if(a[m] < a[m+1])
	    
	     {
	      r=a[m+1];
	      a[m+1]=a[m];
	      a[m]=r;  
                  }
		   m++;
		     }
                       }
	    for(m=0;m <= 4;m++)
	    printf(" %d",a[m]);
	    return;
		 }   


