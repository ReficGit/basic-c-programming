/*18 Exercise􀀃
Write a function which takes three parameters and returns no value. Parameters are a float, a pointer to a
float and an integer. First parameter is currency exchange rate. The second parameter is a pointer to array
of currencies (you can treat the pointer just like an array in your function). The third parameter is the array
size. Function converts all values in the array using the exchange rate. This function MUST NOT print
anything!
Write a main function which defines an array of five floats. Program asks user to enter exchange rate and
then five amounts of money to convert. Program uses the function to do the conversion and prints the
values. Values must be printed so that decimal points are aligned to the same column.
Enter exchange rate: 1.135
Enter 1. amount: 23.14
Enter 2. amount: 100.00
Enter 3. amount: 25.00
Enter 4. amount: 33.75
Enter 5. amount: 1000.00
Converted amounts are:
1: 26.26
2: 113.50
3: 28.38
4: 38.31
5: 1135.00*/

#include <stdio.h>

int currency_exchange(float currency, float *values, int lenght);

#define ARRAY_SIZE 6

int main(void)
{
	float exchange_rate;
	float exchange_ammount[ARRAY_SIZE];
	int i;	
	
	
	printf("Enter exchange rate: ");
	scanf_s("%f", &exchange_rate);

	for (i = 1; i < ARRAY_SIZE; i++){
		printf("Enter %d. amount: ", i);
		scanf_s("%f", &exchange_ammount[i]);
	}

	currency_exchange(exchange_rate, exchange_ammount, ARRAY_SIZE);
	printf("Converted amounts are:\n");
	for(i = 1; i < ARRAY_SIZE; i++){
		printf("%d: %.2f\n", i, exchange_ammount[i]);
	}
	

}

int currency_exchange(float currency, float *values, int lenght)
{
	int i;
	
	for (i = 1; i < lenght; i++){
		values[i] = currency * values[i];
	}

}
