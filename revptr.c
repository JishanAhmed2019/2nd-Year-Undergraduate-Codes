#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	char* c;
	char* d;
	int j = 0;
	int m;
	int i;

	c = a;
	d = b;
	gets(a);
	m = strlen(a);
	for(i = m - 1; i >= 0; i--)
	{
		*(d+j) = *(c+i);
		++j;
	}
	for(i = 0; i < m; i++)
	{
		printf("%c",*(d+i));
	}
	printf("\n");
	return 0;
}

