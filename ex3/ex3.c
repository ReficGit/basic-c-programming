#include <stdio.h>

int main(void)
{
	float price = 0;
	float money = 0;
	float left;
	float cash_need;
	printf("Enter price of bus ticket:\n");
	scanf("%f", &price);
	printf("Price is %.2f euros.\n", price);
	
	printf("How much money do you have:.\n");
	scanf("%f", &money);
	printf("You have %.2f euros.\n", money);

	if (money > price) {
		left = money - price;
		printf("You have enough money for a bus ticket.\n");
		printf("You have %.2f euros left.\n", left);
	} else
		
	if (money < price) { 
		cash_need = price - money;
		printf("You do not have enough money for a bus ticket.\n");
		printf("You need %.2f euros more to buy a ticket.\n", cash_need);
	}
	return 0;
	

}

	







