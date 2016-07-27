/*Ashank Kumar, program checks if string letters are unique*/
#include <stdio.h>
#include <string.h>

int main()
{
	char string[50];
	int x;
	int valid = 1;



	printf("Enter a string:");
	fgets(string, 50, stdin);
	
	string[strlen(string)-1] = '\0';

	int y;
	int z;

	for(y = 0; y < strlen(string)-1; y++)
	{
		for(z = 0; z < strlen(string)-1; z++)
		{
			if(y == z)
				z++;
			if(string[y] == string[z])
			{
				valid = 0;
				goto end_nested;
			}

		}
	}

	end_nested:
	if(valid)
		printf("The string is unique\n");
	if(string[y] == string[z])
		printf("The string is not unique\n");
	
	return 0;
}
