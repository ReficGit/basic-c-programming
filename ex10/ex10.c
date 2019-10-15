/*Write a program that defines an array of 20 integers. Program sets an initial value of 0 to all array elements.
Then program enters a loop which asks user to enter number of element to change. When user has entered
number the program checks that number is within array bounds. If entered number is not valid program
displays an error message. If element number is valid program asks user to enter value for the array
element.
When user enters 99 as the element number the program prints sum of all number in the array.
Note that program must not display an error message when user enters 99 (stop indicator). Define constant
for array size and use constant so that you can easily change the number of elements in the array.
Array element number must be between 0 and 19.
Enter 99 to stop.
Enter nr. of array element to change: 2
Enter value for element 2: 3
Enter nr. of array element to change: 21
Error!
Element nr. must be between 0 and 19!
Enter nr. of array element to change: 17
Enter value for element 17: 9
Enter nr. of array element to change: 5
Enter value for element 5: 54
and so on…
Enter nr. of array element to change: 99
The sum of numbers if: 125*/
#include <stdio.h>
#define ARRAYSIZE 20
int main()
{
	int elements[ARRAYSIZE] = {0};
	int i;
	int number;
	int sum = 0;

	printf("Enter 99 to stop...\n");

	do {
		printf("Enter nr. of array element to change: ");
		scanf("%d", &i);
		if ( i == 99){
			break;
		}

		if ( i > 19 || i < 0){
			printf("Error!\n");
		}

		else {
			printf("Enter value for element %d to change: ", i);
			scanf("%d", &number);
			elements[i] = number;
		}

	} while ( i != 99);
	for (i = 0; i < 20; i++){
		sum = sum + elements[i];
	}
	printf("The sum of numbers is: %d \n", sum);
}


