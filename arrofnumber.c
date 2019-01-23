#include<stdio.h>
void print(int* b);
int main()
{
	int a[5] = {2,4,1,6,7};
	int* b;
	b = &a[0];
	print(b);
	return 0;
}
void print(int* b)
{
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("%d ",*(b+i));
	}
}
