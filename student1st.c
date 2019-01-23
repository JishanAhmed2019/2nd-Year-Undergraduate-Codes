#include<stdio.h>

struct student
{
	char name[100];
	int roll;
	int marks;
};

int main()
{
	int i;
	int max = 0;
	int j;

	struct student a[5] = {"Jishan Ahmed",1,99,"Biplab kumar",2,45,"Mahmudur Rahman",3,88,"Mr. Rahman",4,55,"Istiaq Chowdhury",5,67};

	for(i = 0; i < 5; i++)
	{
		if(max < a[i].marks)
		{
			max = a[i].marks;
			j = i;
		}
	}
	printf("The student name and roll who has secure the 1st place is : \n");
	printf("\tStudent Name : %s\n",a[j].name);
	printf("\tRoll number  : %d\n\n",a[j].roll);
	return 0;
}




