
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char A[30];
	int count_D = 0, count_G = 0;

	printf("Enter the sentence: \n");
	scanf_s("%s", A, 29);
	
	for (int i = 0; i < 30; i++)
	{
		if (A[i] == 'D')
		{
			count_D += 1;
		}
		if (A[i] == 'G')
		{
			count_G += 1;
		}
	}
	if (count_D > count_G)
	{
		printf("Biggest count D = %d", count_D);
	}
	else
	{
		printf("Biggest count G = %d", count_G);
	}
}
