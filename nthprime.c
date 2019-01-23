  #include<stdio.h>
 #include<math.h>
 void main()
	   {
	     int n,i,j,count=1;
	     printf("Enter number:\n");
	     scanf("%d",&n);
	     printf("2");
	      for(i=3; ;i=i+2)
	      {
		for(j=2;j <= sqrt(i);j++)
		  {                                                            /*fisrt n-th prime*/
		    if((i%j)==0)
		    break;
		    else
		    continue;
		    }
		      if(j > sqrt(i))
		      {
			printf(" %d",i);
			count=count+1;
			  }
			  if(count < n)
			    continue;
			    else
			      break;
				}   
                                                      }



