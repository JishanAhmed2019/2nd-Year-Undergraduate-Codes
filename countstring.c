#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i;
	int m;
	int digit = 0;
	int letter = 0;
	int space = 0;
	int special = 0;
	gets(a);
	m = strlen(a);
	for(i = 0; i < m; i++)
	{
		if(isalpha(a[i]))
		{
			++letter;
		}
		else if(isspace(a[i]))
		{
			++space;
		}
		else if(isdigit(a[i]))
		{
			++digit;
		}
		else
		{
			++special;
		}
	}
	printf("Digit		      : %d\n",digit);
	printf("Letter            : %d\n",letter);
	printf("Whitespace        : %d\n",space);
	printf("Special Character : %d\n",special);
	return 0;
}




