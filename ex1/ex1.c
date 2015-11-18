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
	printf("I was born on %d.%d.%d\n", Day, Month, Year);
	printf("Today is %d.%d.%d\n", day, month, year);
	printf("I am %d years old\n", age);
	return 0;
}

