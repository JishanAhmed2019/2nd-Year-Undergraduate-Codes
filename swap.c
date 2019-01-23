#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int* c;
	int* d;
	int a = 2;
	int b = 3;
	c = &a;
	d = &b;
	printf("Before swapping : a = %d, b = %d\n",a,b);
	swap(c,d);
	printf("After swapping  : a = %d, b = %d\n",a,b);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

