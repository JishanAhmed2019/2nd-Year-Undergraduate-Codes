
#include<stdio.h>
int main()
{
	FILE* number;
	FILE* odd;
	FILE* even;
             int n;
            number = fopen("number1.txt","r+");
	odd = fopen("odd1.txt","r+");
	even = fopen("even1.txt","r+");

	while(fscanf(number,"%d",&n) != EOF)
	{
		if(n%2 == 0)
		{
			fprintf(even,"%d ",n);
		}
		else
		{
			fprintf(odd,"%d ",n);
		}
	}
	fclose(number);
	fclose(odd);
	fclose(even);

	return 0;
}
