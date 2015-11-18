#include <stdio.h>
#include <string.h>
#define LINESIZE 10

int main()
{
	char temp[50];
	FILE *my_file;
	int lc = 0;
	float sum = 0;
	float average;
	int numbers[LINESIZE];

	/*printf("Enter file name: ");
	fgets(temp, 50, stdin);
	if(temp[strlen(temp) - 1 ] == '\n'){
		temp[strlen(temp) - 1] = '\0';
	}*/

	printf("File is being opened\n");

	my_file = fopen("numbers.txt", "r");

	if(my_file == NULL) {
		printf("Unable to open the file\n");
	}
	else {
		while(!feof(my_file)) {
			lc++;					
			fscanf (my_file, "%d", &numbers[lc]);	
			sum += numbers[lc];
		}			
		fclose(my_file);
	}
	average = sum/lc;
	printf("Read %d numbers.\n", lc);
	printf("Average value is %.2f.\n", average);

	return 0;

}