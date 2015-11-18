#include <stdio.h>

int main()
{
start:
{
	int day = 0;
	int month = 0;
	int year = 0;
	int next_day;
	int next_month;
	int next_year;
	int next_dayy;
	int first_month;

	printf("Enter today's date (d.m.y):\n");
	scanf("%d.%d.%d", &day, &month, &year);
	if ( day >= 31 || month >= 13){ 
		printf("Please, try again\n");	
		goto start;
	}		
	if (day <= 29){
		next_day = day + 1;
		printf("Tomorrow is: %d.%d.%d\n", next_day, month, year);
	}
	if (day == 30 ){
		next_dayy = day - 29;
		next_month = month + 1;

		if ( next_month == 13){

			first_month = 1;
			next_year = year + 1;
			printf("Tomorrow is: %d.%d.%d\n", next_dayy, first_month, next_year);
		}

		if (next_month == 12){ 

			next_dayy = day - 29;
			printf("Tomorrow is: %d.%d.%d\n", next_dayy, next_month, year);
		} 
	}

	if (day == 30 && month < 12){ 

		next_dayy = day - 29;
		next_month = month + 1;
		printf("Tomorrow is: %d.%d.%d\n", next_dayy, next_month, year);
	}

}
goto start;
}




