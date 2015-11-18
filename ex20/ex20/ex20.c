/*20 Exercise
Write a function which takes three parameters: a string that contains question that is displayed to the user,
a string to hold the answer and an integer which tells the maximum length of the answer string. Function
displays the question to user and reads user answer into the second string. Function must ensure that
maximum number of characters is not exceeded (use fgets and remove the trailing line feed if necessary).
Function does not return a value.
Write a main function that uses this function ask your name, address and postal code. Finally program
prints your full address.
Enter your name: Keijo Länsikunnas
Enter your address: PL 4070
Enter postal code: 00079 Metropolia
Your address is:
Keijo Länsikunnas
PL 4070
00079 Metropolia*/
#include <stdio.h>
#include <string.h>

void func(char *str, char *str_answer, int size);
#define SIZE1 18
#define SIZE2 21
#define SIZE3 20
#define SIZE_ANSWER 50
int main()
{
	char question1[SIZE1] = ("Enter your name: ");
	char question2[SIZE2] = ("Enter your address: ");
	char question3[SIZE3] = ("Enter postal code: ");
	char answer_temp[SIZE_ANSWER];
	char answer[SIZE_ANSWER];


	while(strlen(answer) > SIZE_ANSWER) {
		func(question1, answer_temp, SIZE_ANSWER);
		if (strlen(answer_temp) < SIZE_ANSWER){
			strcpy(answer, answer_temp);
		}
		else {			
			printf("Too large\n");
			break;
		}


		func(question2, answer_temp, SIZE_ANSWER);
		if (strlen(answer_temp) + strlen(answer) < SIZE_ANSWER){
			strcat(answer, answer_temp);
		}
		else{			
			printf("Too large\n");
			break;
		}

		func(question3, answer_temp, SIZE_ANSWER);
		if (strlen(answer_temp) + strlen(answer) < SIZE_ANSWER){
			strcat(answer, answer_temp);
		}
		else {			
			printf("Too large\n");
			break;
		}
		printf("Your address is:\n%s", answer);
	} 
	if (strlen(answer) > SIZE_ANSWER) {
		printf("Restart the program and try again\n");
	}
	return 0;
}

void func(char *str, char *str_answer, int size)
{

	printf("%s", str);
	fgets(str_answer, size, stdin);

}