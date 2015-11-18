/*13 Exercise􀀃
Write a function that takes two integer parameters and returns a float. The function calculates currency
exchange rate. The first parameter is number of euros and the second parameter is number of dollars that
you get for the number of euros (the first parameter).
Write a main function that asks user to enter number of euros and number of dollars for the exchange rate
calculation. Then program prints the exchange rate with 4 decimal. Then program asks how many euros
user wants to convert and then prints amount of dollars user would get.
Enter amount of euros: 100
Enter amount of dollars: 124
Exchange rate: 1.2400
How many euros do want to exchange: 19
You’ll get 23.56 dollars.*/

#include <stdio.h>


float exch_rate(int x, int y);
float get_exchanged(int x, float y);

int main()
{
	int dol;
	int eu;
	int num;
	float rate;
	float result;

	printf("Enter amount of euros: ");
	scanf_s("%d", &eu);
	printf("Enter amount of dollars: ");
	scanf_s("%d", &dol);
	
	rate = exch_rate(eu, dol);
	printf("Exchange rate: %.4f\n", rate);

	printf("How many euros do you want to exchange: ");
	scanf_s("%d", &num);

	result = get_exchanged(num, rate);
	printf("You'll get %.2f dollars\n", result);
}

float exch_rate(int x, int y)				//counts the rate dollars/euros
{
	float result = 0;
	result = (float) y/x;
	return result;
}

float get_exchanged(int x, float y)			//result of exchanging euros to dollars
{
	float result = 0;
	result = x*y;
	return result;
}


