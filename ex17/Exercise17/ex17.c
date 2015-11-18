/*17 Exercise􀀃
Write a function which takes two pointers to float as a parameter and returns a float. The function
calculates the average value of the numbers that pointers point to. Then function changes the numbers so
that their values will be deviation from the average (value – average). Function returns the average value.
This function MUST NOT print anything!
Write a main function that asks user to enter two numbers and then uses the function to calculate average
and deviation and prints them.
Enter 1. number: 14.89
Enter 2. number: 19.36
Average value is:17.125
1. deviation: -2,235
2. deviation: 2,235*/
#include <stdio.h>

float average_deviation(float *x, float *y);

int main()
{
	float m, n, average;
	float *num1, *num2;
	num1 = &m;
	num2 = &n;

	printf("Enter 1. number: ");
	scanf_s("%f", &m);

	printf("Enter 2. number: ");
	scanf_s("%f", &n);
	
	average = average_deviation(num1, num2);
	printf("Average value is: %.3f\n", average);
	printf("1. deviation: %.3f\n2. deviation: %.3f\n", m, n);

}

float average_deviation(float *x, float *y)
{
	float average;
	float temp;
	float temp2;
	temp = *x;
	temp2 = *y;

	average = (temp + temp2) / 2;
	*x = temp - average;
	*y = temp2 - average;
	return average;
}
