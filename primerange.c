 #include<stdio.h>
 #include<math.h>
 void main()
	 {
            int i,j,p,q;
	   printf("Enter Range:\n");
	   scanf("%d %d",&p,&q);                /* prime range*/
             for(i=p;i <= q;i++)
	     {
		for(j=2;j <= sqrt(i);j++)
		  {
		    if((i%j)==0)
		       break;
		       else
		       continue;
		       }
		    if(j > sqrt(i))
		     printf(" %d",i);
		     }
		       }




