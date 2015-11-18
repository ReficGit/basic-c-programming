#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main()
{
	char open_file[50];
	char temp[50];
	int check = 0;
	char *p;
	FILE *my_file;

	printf("Enter file name: ");
	fgets(open_file, 50, stdin);
	if(open_file[strlen(open_file) - 1 ] == '\n'){
		open_file[strlen(open_file) - 1] = '\0';
	}

	my_file = fopen(open_file, "r+");

	if(my_file == NULL) {
		printf("Filed to open file\n");
	}
	else {
		printf("Enter text. Enter single dot to quit.\n");
		do{
			fgets(temp, 50, stdin);
			if (temp[0] == '.'){
				check = 1;
			}
			else {
				for (p = temp; *p != '\0'; p++){
				*p = tolower(*p);
				}
				temp[0] = toupper(temp[0]);
				fputs(temp, my_file);
			}
		}while (check != 1);
		fclose(my_file);
	}
}