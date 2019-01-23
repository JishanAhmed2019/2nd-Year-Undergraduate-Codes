#include<stdio.h>
#include<string.h>

int main()
{
	FILE* infile;
	FILE* outfile;
	int n;

	infile = fopen("c:\\tc3\\bin\\input.txt","r+");
	outfile = fopen("c:\\tc3\\bin\\output.txt","r+");

	while(fscanf(infile,"%d",&n) != EOF)
	{
		fprintf(outfile,"%d ",n);
	}
	return 0;
}
