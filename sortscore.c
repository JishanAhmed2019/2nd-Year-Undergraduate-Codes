#include<stdio.h>

struct student
{
	float marks;
};
int main()
{
	struct student a[5] = {32.0,68.5,11.25,99.5,51.5};
	int i;
	int j;

	for(i = 0; i < 6;i++)
	{
		for(j = 1;j < 6;j++)
		{
			if(a[j].marks >= a[j-1].marks)
			{
				float temp = a[j-1].marks;
				a[j-1].marks = a[j].marks;
				a[j].marks = temp;
			}
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%.2f ",a[i].marks);
	}
	printf("\n\n");
	return 0;
}

