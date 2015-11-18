#include <stdio.h>

int main(void)
{
	float pi = 3.1416;
	float d = 12;
	float r = d / 2;
	float c = 2 * pi * r;

	printf("Radius of circle is %.2f cm\n", r);
	printf("Circumference is %.2f cm\n", c);
	return 0;
}