#include <stdio.h>

int main(void)
{
	int number[12];
	int num;
	int i;
	printf("Enter starting number: ");
	scanf("%d", &num);

	for (i = 0; i <= 11; i++){
		number[i] = num;
		num = num + 1;
		}
	
	printf("The array numbers are:\n");
	for (i = 0; i <= 11; i++){
		printf("%d ", number[i]);
		}
}
