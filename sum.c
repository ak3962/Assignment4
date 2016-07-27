/* Ashank Kumar, user inputs an array, proram outputs cumulative sum of the elements in the array so far */
#include <stdio.h>

int main()
{
	int x;
	int total = 0;

	printf("Enter the length of the string:");
	scanf("%d",&x);

	int num[x];
	int sum[x];

	for(int i = 0; i < x; i++)
	{
		printf("Enter a number:");
		scanf("%d",&num[i]);
		total = total + num[i];
		sum[i] = total;
	}

	printf("\n");

	for(int y = 0; y < x; y++)
	{
		printf("%d,",num[y]);
	}

	printf("\n");

	for(int z = 0; z < x; z++)
	{
		printf("%d,",sum[z]);
	}
	
	printf("\n");

	return 0;
}
