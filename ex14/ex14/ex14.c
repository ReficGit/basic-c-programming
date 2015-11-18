/*14 Exercise􀀃
Write a function which takes one integer as a parameter and does not return a value. The function prints
number of hash signs (#) specified by the parameter on a single line.
Write a main function that prints 10 random lines of hash signs using the function above. The number of
hash sings on each line must be in the range of 2 to 25. You can get random numbers by calling randfunction.
In order to use rand() you must include stdlib.h at the beginning of your source code. Time.h is
required to inititalize random number generator seed number. Call srand once at the beginning of your
program (see examples below).
#include <stdlib.h>
#include <time.h>
Rand() takes no parameters and returns an integer in the range of 0 to RAND_MAX. An easy way to limit
the range of numbers is to use modulus operator and offset if required.
srand(time(NULL)); // this initializes generator seed value
v1 = rand() % 10; // v1 in the range 0 to 9
v2 = rand() % 10 + 1; // v2 in the range 1 to 10
Random lines:
####
###########
##
######################
########
###################
etc.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hash(int v1, int v2);

int main()
{
	int v1;
	int v2;
	int g;
		int arr[10] = {0};
	srand(time(NULL));
	for (g = 0; g < 10; g++){
	v1 = rand() % 24 + 2;			
	arr[g] = v1;
	}

	for (g = 0; g < 10; g++){
		hash(arr[g]);
	}

}

void hash(int v1)
{
	int i;

	for (i = 0; i < v1; i++){
		printf("#");
	}
	printf("\n");
}



