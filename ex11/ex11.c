/*Write a program that prints a menu and asks user to select an action. Menu contains five choices: enter
operand 1, enter operand 2, multiply operands, add operands, print result and quit. If user makes an invalid
selection program does nothing and prints the menu again.
Use a loop to repeat menu printing and use switch-case statement inside the loop to determine actions to
perform.
Select operation:
1) enter operand 1
2) enter operand 2
3) multiply operands
4) add operands
5) quit
1
Enter operand 1: 4
Select operation:
1) enter operand 1
2) enter operand 2
3) multiply operands
4) add operands
5) quit
2
Enter operand 2: 7
Select operation:
1) enter operand 1
2) enter operand 2
3) multiply operands
4) add operands
5) quit
3
Result = 28
Select operation:
1) enter operand 1
2) enter operand 2
3) multiply operands
4) add operands
5) quit
5
Quit. (then program stops)*/
#include <stdio.h>

int main(void)
{
	int selection;
	int operand1 = 0;
	int operand2 = 0;
	int multi;
	int add;

		do {
			printf("Select operation:\n1) enter operand 1\n2) enter operand 2\n3) multiply operands\n4) add operands\n5) quit\n");
			scanf("%d", &selection);
			
			switch (selection) {
				case 1:
					printf("Enter operand 1: ");
					scanf("%d", &operand1);
					break;
				case 2:
					printf("Enter operand 2: ");
					scanf("%d", &operand2);
					break;
				case 3:
					multi = operand1 * operand2;
					printf("Result = %d\n", multi);
					break;
				case 4:
					add = operand1 + operand2;
					printf("Result = %d\n", add);
					break;
				}
		} while (selection != 5);
}
