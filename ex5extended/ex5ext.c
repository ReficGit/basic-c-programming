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
	if ( day > 31 || month >= 13 || day > 31 && month == 1 || day > 28 && month == 2 || day > 31 && month == 3 || day > 30 && month == 4 
	|| day > 31 && month == 5 || day > 30 && month == 6 || day > 31 && month == 7 || day > 31 && month == 8 || day > 30 && month == 9 
	|| day > 31 && month == 10 || day > 30 && month == 11 || day > 31 && month == 12 ) 
	{ 
		printf("Please, try again\n");	
		goto start;
	}		
	if ( day <= 31 && month == 1)
		{
			next_day = 
		}

	}
	goto start;
}
	
	
	

