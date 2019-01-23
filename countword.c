#include<stdio.h>
#include<ctype.h>

int main()
{
	char letter[80];
	int count;
	int track = 0;

	for(count = 0; (letter[count] = getchar()) != '\n';++count)
	{
		if(letter[count] == ' ')
		{
			++track;
		}
	}
	printf("The number of words in this sentence are %d\n",track+1);
	return 0;
                                 }



