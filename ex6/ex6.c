#include <stdio.h>
#define height_in_meters 100

int main()
{
	float w = 0, h = 0, bmi;

	printf("Enter Your weight in kilograms: \n");
	scanf_s("%f", &w);
	printf("How tall You are in centimeters: \n");
	scanf_s("%f", &h);
	h = h / height_in_meters;
	bmi = w / (h * h);
	printf("Your BMI is %.1f.\n", bmi);
	
	if ( bmi < 18.5 ){
		printf("According to BMI you have underweight\n");
	}
	else if ( bmi > 25 ){
		printf("According to BMI you have overweight\n");
	}

	else {
		printf("According to BMI you have normal weight\n");
	}
	
}

	