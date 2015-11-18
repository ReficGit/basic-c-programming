/*19 Exercise􀀃
Write a program which defines three strings. One for your first name, one for your last name and one for
whole name (first & last combined). Program asks you to enter your first name and then your last name.
Program then checks that combined length of both names is not larger than the third string and will copy
the strings only if they fit in the third string. Put last name at the beginning of the combined name and
remember to add space between names. Note that you have to take the added space into account when
calculating the length of combined strings. Use strcpy and strcat. Finally program prints the combined string
and its length.
Enter your first name: Keijo
Enter your last name: Länsikunnas
Hello, Länsikunnas Keijo
Length of name = 17*/

#include <stdio.h>
#include <string.h>


int main()
{
	char name[10];
	char s_name[16];
	char comb_name[26];

	printf("Enter your first name: ");
	fgets(name, 10, stdin);
	
	if(name[strlen(name) - 1] == '\n'){
		name[strlen(name) - 1] = '\0';
	}
	
	printf("Enter your second name: ");
	fgets(s_name, 16, stdin);
	
	if(s_name[strlen(s_name) - 1] == '\n'){
		s_name[strlen(s_name) - 1] = '\0';
	}
	
	if((strlen(s_name) + strlen(name) + 1) < 26){
	strcpy(comb_name, s_name);
	strcat(comb_name, " ");
	strcat(comb_name, name);
	printf("Hello, %s\n", comb_name);
	printf("Length of name = %d\n", strlen(comb_name));
	}
	
	else { 
		printf("Name and second name are too large to fit in the combined name string\n");}
	
	return 0;
}

