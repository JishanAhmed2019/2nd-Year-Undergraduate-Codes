#include<stdio.h>
void seperate(int a);
int main()
{
	int a;
	scanf("%d",&a);
	seperate(a);
	return 0;
}
void seperate(int a)
{
	int t;
	int odd = 0;
	int even = 0;
		t = a;
	while(a != 0)
	{
		t = a%10;
		a = a/10;

		if(t%2 == 0)
		{
			even = even + t;
		}
		else
		{
			odd = odd + t;
		}
	}
	printf("The sum of odd digit is %d\n",odd);
	printf("The sum of even digit is %d\n",even);
}
