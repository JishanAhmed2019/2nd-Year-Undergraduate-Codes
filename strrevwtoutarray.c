#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	int m;
	gets(a);
	m = strlen(a);
	for(i = m - 1; i >= 0; i--)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
