/*24 Exercise􀀃
Define a structure to hold student information. Structure must contain: first name, last name and amount
of course credits.
Write a program which defines an array of students. Program asks user to enter name and amount of
course credits for each student. When all information is entered program prints a list of students. First
name, last name and credits must be printed in aligned columns.
Your array of students must contain at least 5 students!
Enter first name of
student 1: Jack
Enter last name of
student 1: Daniels
Enter number of credits of
student 1: 55
Enter first name of
student 2: John
.
.
.
Enter number of credits of
student 5: 123
Jack Daniels 55
John Woo 87
Richard Westwood 197
Daniel Knizia 53
Clyde Dillinger 32*/

#include <stdio.h>
#include <string.h>
#define SIZE_ARRAY 6
#define SIZE_NAME 10
#define SIZE_LNAME 15

struct studentRecord {
	char first_name[SIZE_NAME];
	char last_name[SIZE_LNAME];
	int credits;
};

int main()
{
	struct studentRecord myRcrd[SIZE_ARRAY];
	int i;
	char temp[10];

	for (i = 0; i < SIZE_ARRAY; i++){
		printf("Enter first name of student %d: ", i+1);
		fgets(myRcrd[i].first_name, SIZE_NAME, stdin);
		myRcrd[i].first_name[strlen(myRcrd[i].first_name) - 1] = '\0';
		
		printf("Enter last name of student %d: ", i+1);
		fgets(myRcrd[i].last_name, SIZE_LNAME, stdin);
		myRcrd[i].last_name[strlen(myRcrd[i].last_name) - 1] = '\0';
		
		printf("Enter number of credits of student %d: ", i+1);
		fgets(temp, 10, stdin);
		sscanf_s(temp, "%d", &myRcrd[i].credits);
		printf("\n");
	}

	for (i = 0; i < SIZE_ARRAY; i++){
		printf("%-10s %s\t %d\n", myRcrd[i].first_name, myRcrd[i].last_name, myRcrd[i].credits);
	}
}