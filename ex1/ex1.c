#include <stdio.h>

int main(void)
{
	int Day = 9;
	int Month = 12;
	int Year = 1992;
	int day = 9;
	int month = 1;
	int year = 2013;
	int age;
	age = year - Year;
	printf("I was born on %d.%d.%d\n", Day, Month, Year);//Displays user date of birth
	printf("Today is %d.%d.%d\n", day, month, year);//Displays today's date
	printf("I am %d years old\n", age);//Displays the age of the user
	return 0;
}

