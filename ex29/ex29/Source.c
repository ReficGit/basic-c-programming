#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define NAME_SIZE 20 //item_name
#define NUM 10		 //strct size
#define SIZE 100	 //line size

struct warehouse {
	char item_name[NAME_SIZE];
	float price;
	int items_num;
	int orders_num;
};

int main(void)
{
	int lc = 0;
	struct warehouse mystrct[NUM];
	FILE *my_file;
	//char temp[NAME_SIZE];
	//char line[SIZE];

	char buffer[100];
	long lSize = 130;

	int i = 0;
	int check = 0;
	/*printf("Enter the name of a file to open: ");
	fgets(temp, NAME_SIZE, stdin);
	if (temp[strlen(temp) - 1] == '\n'){
	temp[strlen(temp) - 1] = '\0';
	}
	*/
	my_file = fopen("list.txt", "rb+");

	if (my_file == NULL) {
		printf("Unable to open file %s\n", my_file);
	}
	else {
		//fseek (my_file , 0 , SEEK_END);
		//lSize = ftell (my_file);
		//rewind (my_file);

		while(!feof(my_file))
		{
			if (fread(buffer, 1, lSize, my_file) != NULL){
				lc++;
				if (sscanf(buffer, "%s %f %d %d", &mystrct[i].item_name, &mystrct[i].price, &mystrct[i].items_num, &mystrct[i].orders_num) == 4){
					printf("Success\n");
				}
					
			}

			/*while(!feof(my_file)) {
			if(fgets(line, SIZE, my_file) != NULL){				
			if (sscanf(line, "%s %f %d %d", &mystrct[lc].item_name, &mystrct[lc].price, &mystrct[lc].items_num, &mystrct[lc].orders_num) == 4){
			printf("Reading successful\n");
			lc++;					
			}				
			else {
			printf("Reading error.\n");
			}
			}			
			}*/

			/*		do{
			fgets(temp, 50, stdin);
			if (temp[0] == '.'){
			check = 1;
			}
			else {
			fputs(temp, my_file);
			}
			}while (check != 1);*/
		}
		}
	
	printf("\n%d items read\n", lc);

	for (i = 0; i<5; i++){
		printf("%-8s\t %-1.2f\t %-1d\t %.2d\n", mystrct[i].item_name, mystrct[i].price, mystrct[i].items_num, mystrct[i].orders_num);
	}
}



