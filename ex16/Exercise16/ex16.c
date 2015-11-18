/*16 Exercise􀀃
Write a function which takes two pointers to float as a parameter and no value. The function finds largest
of the two numbers and scales the numbers in to range of 0 -. 1.0 so that largest number is set to one and
smallest is scaled with equal scale (new value = smallest/largest). This function MUST NOT print anything!
Write a main function that asks user to enter two positive numbers and then uses the function to scale the
numbers. Finally program prints the numbers.
Enter 1. number: -1.3
Number must be positive!
Enter 1. number: 1.89
Enter 2. number: 9.46
Scaled values are:
1: 0.19979
2: 1.00000
Another example
Enter 1. number: 11.29
Enter 2. number: 9.46
Scaled values are:
1: 1.00000
2: 0.83791*/

#include <stdio.h>

void scale(float *x, float *y);

int main()
{
	float m, n;
	float *num1, *num2;
	num1 = &m;
	num2 = &n;

	do{
		printf("Enter 1. number: ");
		scanf_s("%f", &m);
		if (m < 0){
			printf("Number must be positive!\n");
		}
	} while ( m < 0);

	do{
		printf("Enter 2. number: ");
		scanf_s("%f", &n);
		if (n < 0){
			printf("Number must be positive!\n");
		}
	} while ( n < 0);

	scale(num1, num2);

	printf("Scaled values are:\n1: %.5f	\n2: %.5f\n", m, n);

}

void scale(float *x, float *y)
{
	float temp;
	if (*x < *y){
		temp = (*x)/(*y);
		*x = temp;
		*y = 1;
	}
	else {
		temp = (*y)/(*x);
		*y = temp;
		*x = 1;
	}
}
