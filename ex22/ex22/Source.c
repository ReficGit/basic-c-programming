/*22 Exercise??
Write a function which asks user to enter numbers in to 3 x 3 magic square. 3 x 3 magic square has
numbers 1 – 9 distributed in squares so that sum of numbers on each row or column is 15. Write a function
which takes 3 x 3 array as a parameter and does not return a value. Function asks user to enter values for
each element and checks that entered value is between 1 and 9 and appears only once in the array. If
value is invalid user is asked again until he/she enters a valid value. The function doesn’t need to check if
sum of rows or columns is correct. Checking is easier if you initialize the array to zero at the beginning of
the function.
Write a function which takes 3 x 3 array and integer as parameters and returns an integer. Function returns
zero if the integer parameter does not appear in the array and non-zero if the integer is already in the
array. Use this function to prevent user from entering duplicates in the array.
Write a main program that uses the functions to ask magic square numbers and then prints the numbers
into square.
http://en.wikipedia.org/wiki/Magic_square
Enter numbers of 3 x 3 magic square:
Enter row 1, element 1: 3
Enter row 1, element 2: 4
Enter row 1, element 3: 5
Enter row 2, element 1: 3
Duplicate values are not allowed! Enter another number.
Enter row 2, element 1: 1
Enter row 2, element 2: 7
Enter row 2, element 3: 0
Invalid value! Number must be between 1 and 9.
Enter row 2, element 3: 8
Enter row 3, element 1: 9
Enter row 3, element 2: 2
Enter row 3, element 3: 6
Your square is:
3 4 5
1 7 8
9 2 6*/

#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COL 3

int get_numbers(int x[ROWS][COL]);
int check_numbers(int y[ROWS][COL],int z);

int main(void)
{
	int i,j;
	int square[ROWS][COL];

	get_numbers(square);
	
	printf("Your square is\n");
	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COL; j++){
			printf("%d ", square[i][j]);
			}
		printf("\n");
		}
	
	return 0;
}

int get_numbers(int x[ROWS][COL])
{
	int i,j;
	int temp;
	//int *num1;
	int check;
	
	//num1 = &temp;

	printf("Enter numbers of 3 x 3 magic squere:\n");

	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COL; j++){
			do{
				printf("Enter row %d, element %d: ", i+1, j+1);
				scanf_s("%d", &temp);
				if (temp < 1 || temp > 9) {
					printf("Invalid value! Number must be between 1 and 9.\n");
					check = 1;
				}
				else {
					check = check_numbers(x, temp);
					if (check == 1){
						printf("Duplicate values are not allowed! Enter another number\n");
					}
					if (check != 1){
						x[i][j] = temp;
					}
				}
			} while (check == 1);
		}
	}
	return 0;
}

int check_numbers(int y[ROWS][COL], int z)
{
	int i,j;
	
	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COL; j++){
			if (y[i][j] == z){
				return 1;
			}
		}
	}
	return 0;
}