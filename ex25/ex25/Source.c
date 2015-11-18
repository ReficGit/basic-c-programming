#include <stdio.h>
#include <string.h>

#define STRUCT_SIZE 20

struct compInfo {
	char comp_name[15];
	float single_share;
	float last_dividend;
};

char enter_info(struct compInfo *inf);
float average_dividend(struct compInfo *inf,int *x);

int main()
{
	struct compInfo inf[STRUCT_SIZE];
	int i = 0;
	int check = 0;
	int number = 0;
	float average;
	int *num1;
	num1 = &number;

	for (i = 0; i < STRUCT_SIZE; i++){
		check = enter_info(&inf[i]);
		if (check == 1){
			number = number + 1;
		}
		else {
			break;
		}
	}
	average = average_dividend(inf,num1);
	printf("average is %.4f\n", average);
	
	printf("Over average:\n");
	for (i = 0; i < number; i++){
		if (inf[i].last_dividend > average){
		printf("%s\t %.2f\t %.2f\n", inf[i].comp_name, inf[i].single_share, inf[i].last_dividend);
		}
	}
	
	printf("Under average:\n");
	for (i = 0; i < number; i++){
		if (inf[i].last_dividend <= average){
		printf("%s\t %.2f\t %.2f\n", inf[i].comp_name, inf[i].single_share, inf[i].last_dividend);
		}
	}

	return 0;
}

char enter_info(struct compInfo *inf)
{
	int i = 0;
	char temp[50];
	int return_value;
	int check2 = 0;
	do {
		printf("Enter company name: ");	
		fgets(temp, 50, stdin);
		if(temp[strlen(temp) - 1] == '\n'){
			temp[strlen(temp) - 1] = '\0';
		}

		if (strlen(temp) == 0) {
			return_value = 0;
			return return_value;
		}
		if (strlen(temp) < 15) {
			strcpy(inf->comp_name, temp);
			do {
				printf("Enter share price: ");
				fgets(temp, 50, stdin);
				sscanf_s(temp, "%f", &inf->single_share);
				if (inf->single_share < 0) {
					printf("The number must be positive\n");
				}
			}while (inf->single_share < 0);

			do{
				printf("Enter dividend: ");
				fgets(temp, 50, stdin);
				sscanf_s(temp, "%f", &inf->last_dividend);	
				if (inf->last_dividend < 0) {
					printf("The number must be positive\n");
				}				
			}while (inf->last_dividend < 0);

			return_value = 1;
			return return_value;
		}
		else {
			printf("The name is too long to fit a string\n%d\n", strlen(temp));
			check2 = 1;
		}
	} while (check2 == 1);
	return 0;
}

float average_dividend(struct compInfo *inf, int *x)
{
	int i;
	float sum = 0;
	int num1;
	float average;
	num1 = *x;
	for (i = 0; i < num1; i++){
		sum += inf[i].last_dividend;
	}
	average = sum/num1;
	return average;
}