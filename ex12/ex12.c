/*12 Exercise
Write a program that asks user to enter the amount of money he wants to lend. Then program asks user to
enter interest rate. Finally program asks user to enter 3 down payments. If user enters a negative number
program displays an error message and asks user to enter number again.
When user has entered all number the program prints a table of total payments with two decimals and
amount of money you owe at the end. The interest you have to pay is the amount of loan before the
payment multiplied by the interest rate.
How much you want to lend: 150
Enter interest rate (percent): 7.5
Enter 1. down payment: 20
Enter 2. down payment: 15
Enter 3. down payment: 28
1. payment: 31.25
2. payment: 24.75
3. payment: 36.63
You still owe 87 euros.*/

#include <stdio.h>
#define ARRAYSIZE 3
int main(void)
{
   float lend;
   float perc;
   float down[ARRAYSIZE];
   float pay;
   float payment;
   int i;
   float owe;

   printf("How much you want to lend: ");
   scanf("%f", &lend);
   printf("Enter interest rate (percent): ");
   scanf("%f", &perc);

   for (i = 0; i < 3; i++){
	   printf("Enter %d. down payment: ", i+1);
	   scanf("%f", &pay);
	   down[i] = pay;
   }
  
   		
   for (i = 0; i < 3; i++){
	   //perc = perc/100*lend;
	   payment = down[i]+perc/100*lend;
	    printf("%d. payment: %.2f\n ", i+1, payment);
		 lend = lend - down[i];
		 
		 
  }

   printf("You still owe %.2f euros. ", lend);

}
