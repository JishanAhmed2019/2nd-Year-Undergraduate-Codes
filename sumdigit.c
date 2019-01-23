#include<stdio.h>
int sum(int a);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",sum(a));
	return 0;
}
int sum(int a)
{
	int t;
	int sum = 0;
	t = a;
	while(a != 0)
	{
		t = a%10;
		a = a/10;
		sum = sum + t;
	}
	return sum;
}
