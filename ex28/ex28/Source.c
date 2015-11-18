#include <stdio.h>
#include <string.h>
#define LINESIZE 10
#define NUM 2
#define SIZE 20
int main(void)
{
	FILE *my_file;
	char line[LINESIZE];
	int numbers[NUM];
	int multi = 0;
	int lc = 0;
	char temp[SIZE];

	printf("Enter file name: ");
	fgets(temp, 20, stdin);
	if(temp[strlen(temp) - 1 ] == '\n'){
		temp[strlen(temp) - 1] = '\0';
	}

	my_file = fopen(temp, "r");

	if (my_file == NULL) {
		printf("Unable to open %s\n", temp);
	}
	else
	{
		printf("Opened %s\n", temp);
		while (!feof(my_file)) {
			if (fgets(line, LINESIZE, my_file) != NULL) {
				lc++;
				if (sscanf(line, "%d %d", &numbers[0], &numbers[1]) == 2) {
					multi = numbers[0] * numbers[1];
					printf("%d * %d = %d\n", numbers[0], numbers[1], multi);
				}
				else {
					printf("Error! Line number %d is invalid.\n", lc);
				}
			}
			else {
				printf("Error!");
			}
		}
		fclose(my_file);
	}
}
