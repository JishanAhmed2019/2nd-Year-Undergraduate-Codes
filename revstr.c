#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	char b[100];
	int i;
	int j = 0;
	int k;
	int m;

	gets(a);
	m = strlen(a);

	for(i = m - 1; i >= 0; i--)
	{
		b[j] = a[i];
		++j;
	}

	for(k = 0; k < m; k++)
	{
		printf("%c",b[k]);
	}

	printf("\n");
return 0;
}

