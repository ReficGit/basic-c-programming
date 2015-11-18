/*23 Exercise􀀃
Define a structure to hold month names and numbers. The structure must have two members: a string and
an integer.
Write a function that takes the structure as an argument and returns no value. Function prints month
number and name of the month.
Write a program that asks user to enter name of month and month number and stores them in the
structure. Program must ensure that month number is in range of 1 to 12. Then program calls the printing
function to print the structure that user has entered.*/

#include <stdio.h>
#include <string.h>



struct months {
	char name[10];
	int month_number;
} ;

void print_structure (struct months *m);

int main()
{
	struct months mo[12];
	int i;
	char temp[10];
	
	for (i = 0; i < 12; i++){
		printf("Enter month number: ");
		fgets(temp, 10, stdin);
		sscanf_s(temp, "%d", &mo[i].month_number);
		printf("Enter month name: ");
		fgets(mo[i].name, 10, stdin);
		printf("\n");
		 
	}
	print_structure(mo);
}

void print_structure (struct months *m){
	int i;
	for (i = 0; i < 12; i++){
		printf("%d %s", m[i].month_number, m[i].name);
	}
}