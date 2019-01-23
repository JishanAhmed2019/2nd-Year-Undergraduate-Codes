#include<stdio.h>
#include<string.h>
void main()
	{
	  char s1[10],s2[10];
	  int i;
          printf("Enter string first:\n");
	  gets(s1);
          printf("Enter string second:\n");
	  gets(s2);                                                          
	  i=0;
	  while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0')
	  i++;
	  if(s1[i]=='\0' && s2[i]=='\0')
	  printf("They are Equal");
	    else
	  printf("they are not equal");
	    } 



