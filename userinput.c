#include <stdio.h>

int main()

{

	int userInput;

	printf("Yo, how old are ya?\n");
	

	scanf("%d",  &userInput);

	fpurge(stdin);

	printf("You are %d years old, woot!\n", userInput);

	return 0;
}