/*Ashank Kumar, takes the vowels out of a string and prints the new string*/
#include <stdio.h>
#include <string.h>

int main()
{
	char string[50];
	char change[50];
	int counter = 0;

	printf("Enter a string:");
	fgets(string, 50, stdin);

	string[strlen(string)-1] = '\0';

	/*for(int x = 0; string[x] != '\0'; x <strlen(string);x++)
	{
		switch(string[x])
		{
			case 'a':
				break;
			case 'e':
				break;
			case 'i':
				break;
			case 'u':
				break;
			case 'o':
				break;
			case 'A':
				break;
			case 'E':
				break;
			case 'I':
				break;
			case 'U':
				break;
			case 'O':
				break;
			default:
				change[counter] = string[x];
				counter++;
		}
	} */
	
	for(int x = 0; string[x] != '\0'; x++)
	{
		if(string[x] == 'e' || string[x] == 'u' || string[x] == 'o' || string[x] == 'a' || string[x] == 'i' || string[x] == 'E' || string[x] == 'U' || string[x] == 'O' || string[x] == 'A' || string[x] == 'I')
		{
			continue;
		}
		else
		{
			change[counter] = string[x];
			counter++;
		}
			
	}

	printf("\n%s",change);

	printf("\n");

	return 0;
}
