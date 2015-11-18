#include <stdio.h>

int main(void)
{
	float salary = 1238.75;
	float tax = 17;
	float eu_tax = salary * tax / 100;
	float after_salary = salary - eu_tax;
	float rise = 150;
	float new_salary = salary + rise;
	float after_newtax = new_salary * tax / 100;
	float after_newsalary = new_salary - after_newtax;

	printf("My salary is %.2f euros\n", salary);
	printf("My tax percentage is %.1f percent\n", tax);
	printf("I have to pay %.2f euros tax\n", eu_tax);
	printf("I have %.2f euros to spend or save\n", after_salary);
	printf("My boss raises my salary by %.f euros\n", rise);
	printf("My new salary is %.2f euros\n", new_salary);
	printf("After taxes I have %.2f euros\n", after_newsalary);
	return 0;
}
