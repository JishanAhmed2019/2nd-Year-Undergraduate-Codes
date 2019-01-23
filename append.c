#include<stdio.h>
#include<conio.h>
int main()
{
	FILE* infile2;
	int a,i = 0,n,m;
	printf("Enter your choice :\n");
	printf("for write press 1\n");
	printf("for read press 2\n");
	printf("for apend press 3\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	infile2 = fopen("C:\\input.txt","wb+");


	scanf("%d",&n);
	fprintf(infile2,"%d",n);

	scanf("%d",&m);
	fprintf(infile2,"%d",m);

	fclose(infile2);
	break;

	case 2:
	infile2 = fopen("C:\\input.txt","r+");


	while(fscanf(infile2,"%d",&n) !=EOF)
	{
		printf("%d\n",n);
	}
	fclose(infile2);
	break;
 case 3:
infile2 = fopen("C:\\input.txt","a+");


	scanf("%d",&n);
	fprintf(infile2,"%d",n);

	fclose(infile2);
	break;
	default:
	break;
getch();
	return 0;
}
