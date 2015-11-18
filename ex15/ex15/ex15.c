/*15 Exercise􀀃
Write a function which takes two integer parameters and returns an integer. The function asks user to
enter a number in a range that is specified by the function parameters. First parameter is the lower limit
and second parameter is the upper limit. If user enters invalid value function prints an error message and
asks user to enter number again. Function returns only when user has entered a valid value.
Write a main function that uses the function to read one number in range of 10 to 20 and one in the range
of 0 to 5. In the end program prints the numbers ant their product.
Enter a number [10 – 20]: 34
Invalid value! number must be between 10 and 20.
Enter a number [10 – 20]: 15
Enter a number [0 – 5]: 3
3 multiplied by 15 is 45.*/

#include <stdio.h>

int number(int x, int y);
int prdct(int x, int y);

int main(void)
{
	int a, b;
	int max_1 = 20, max_2 = 5;
	int min_1 = 10, min_2 = 0;
	int num_product;

	a = number(max_1, min_1);
	b = number(max_2, min_2);

	num_product = prdct(a,b);
	printf("%d multiplied by %d is %d\n", b, a, num_product);

	return 0;
}

int number(int x, int y)
{
	int number;
	do {
		printf("Enter a number [%d - %d]: ", y, x);
		scanf_s("%d", &number);
		if (number < y || number > x){
			printf("Invalid value! number must be between %d and %d.\n", y, x);
		}
	} while (number < y || number > x);
	return number;
}

int prdct(int x, int y)
{
	int result;
	result = x*y;
	return result;
}




