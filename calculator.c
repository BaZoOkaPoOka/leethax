#include <stdio.h>							// input output header
#include <stdbool.h>						// boolean header

int main()									// integer function
{
	
	int vFirstArg,							// integer variable declarations
		vSecondArg;
	char	vOperation;						// character variable declaration
	bool	vFinished;						// boolean variable declaration

	vFinished = false;    					// initialized flag. 


	while( vFinished != true )				// while "vFinished is not true" is a true statement....the command below will run until vFinished is false.
	{

		printf( "What operation do you want to do?\n" ); // write "What operation do you want to do?"
		scanf( "%c", &vOperation );						//  read input, input is a character variable called vOperation
		fpurge( stdin );								// done reading. will write again.

		if( vOperation == '+')							//  if character variable matches comparison of +....
		{

			printf("Enter left argument:\n");			//	write "Enter left argument:"
			scanf("%d", &vFirstArg);					// read input, input is an integer variable called vFirstArg
			fpurge( stdin );							// done reading. will write again.

			printf("\nEnter right argument: " );        // write "Enter right argument: "
			scanf( "%d", &vSecondArg);					// read input, input is an integer variable called vSecondArg
			fpurge( stdin );							// done reading. will write again.

			printf("\n%d + %d = %d\n",					// write "vFirstArg + vSecondArg = integer"
						vFirstArg,
						vSecondArg,
						vFirstArg + vSecondArg );
		}
		else											// if character variable called vOperation is not +, "vFinished != true" becomes a FALSE STATEMENT 
			vFinished = true;							// if vFinished is true.....
	}

	printf("Finished . \n");							// write "Finished"


	return 0;											// it's OK!
} 