/*21 Exercise􀀃
Write a program which defines an array of strings to hold month names. Program then displays numbers
from 1 to 12 and asks user to enter name for each month. Finally program prints a list of month numbers
and their names. Remember to ensure that user does not enter too long month names!
Enter name of month number 1: Tammikuu
Enter name of month number 2: Helmikuu
.
. program asks each month
.
Enter name of month number 12: Joulukuu
Each year has the following months:
1. Tammikuu
2. Helmikuu
.
.
.
12. Joulukuu*/

#include <stdio.h>
#include <string.h>

#define SIZE_STRING 10
#define ARRAY_SIZE 12

char names_of_months(char *q, char  z[ARRAY_SIZE][SIZE_STRING]);
char type_months(char z[ARRAY_SIZE][SIZE_STRING]);

int main()
{ 
	char question[] = {"Enter name of month number"};
	char months[ARRAY_SIZE][SIZE_STRING];
	names_of_months(question, months);
	type_months(months);
	
	return 0;
}

char names_of_months(char *q, char z[ARRAY_SIZE][SIZE_STRING])
{
	int row;
	int y = ARRAY_SIZE;
	int x = SIZE_STRING;
	
	for (row = 0; row < y; row++){
		printf("%s %d:", q, row+1);
		fgets(z[row], x, stdin);		
	}
	
	return 0;
}

char type_months(char z[ARRAY_SIZE][SIZE_STRING])
{
	int row;
	int y = ARRAY_SIZE;
	
	printf("Each year has the following months:\n");
	for (row = 0; row < y; row++){
		printf("%d. %s", row+1, z[row]);
				
	}
	return 0;
}