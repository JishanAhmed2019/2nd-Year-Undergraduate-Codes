#include<stdio.h>

struct student
{
	char name[100];
	int roll;
	float average;
	int bengali;
	int english;
	int math;
};

int main()
{
	struct student a[5] = {"Jishan Ahmed",1,0,88,89,99,"Biplab Kumar",2,0,45,46,47,"Mahmudur Rahman",3,0,88,89,90,"Mr. Rahman",4,0,55,56,57,"Istiaq Chowdhury",5,0,67,68,69};
	float avg = 0;
	int i;
	float max = 60;

	for(i = 0; i < 5; i++)
	{
		avg = avg + a[i].bengali + a[i].english + a[i].math;
		a[i].average = avg/3;
		avg = 0;
	}
	printf("The students name,roll and average marks who have secured the 1st class are : \n");
	for(i = 0; i < 5; i++)
	{
		if(max <= a[i].average)
		{
			printf("\tStudent Name  : %s\n",a[i].name);
			printf("\tRoll number   : %d\n",a[i].roll);
			printf("\tAverage Marks : %.2f\n\n",a[i].average);
		}
	}
	return 0;
}


