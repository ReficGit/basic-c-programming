#include <stdio.h>

int main(void)
{
	float numbers[7];
	float number;
	float min;
	int i;
				
	printf("Enter seven numbers:\n");
	for (i = 0; i < 7; i++){
		printf("Enter number %d: ", i+1);
		scanf("%f", &number);
		numbers[i] = number;
	   }

	min = numbers[0];
	for (i = 0; i < 7; i++){
			
			if (numbers[i] < min){
			min = numbers[i];
		}
	}
	printf("The smallest number that you entered was: %.3f:\n", min);
		
}
