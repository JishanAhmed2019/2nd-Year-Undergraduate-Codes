#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char* s;
	int i;
	int m;
	s = a;
	gets(a);
	m = strlen(a);
	for(i = m - 1; i >= 0; i--)
	{
		printf("%c",*(s+i));
	}
	printf("\n");
}

