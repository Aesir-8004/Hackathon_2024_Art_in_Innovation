#include "header.h"

int menu(void)
{
	int choice = 0; 
	printf("Game name!!\n"); 
	printf("------------------------\n"); 
	printf("[ 1 ] Rules\n");
	printf("[ 2 ] Settings\n");
	printf("[ 3 ] Start\n");
	printf("[ 4 ] Quit\n");
	printf("------------------------\n"); 

	scanf("%d", &choice); 

	return choice; 

}
void print_rules(void)
{
	printf("Hello! Before we get into drawing, here is some control you need to know.\n"); 
	putchar('\n');
	printf("Main Controls:\n");
	printf("------------------------\n"); 
	printf("[Q][W][E]     [↖][↑][↗] \n");
	printf("[A][S][D]  =  [←][ ][→] \n");
	printf("[X][Z][C]     [↙][↓][↘] \n"); 
	putchar('\n');
	printf("Their is a corresponding\n"
		"keystroke with the direction\n"
		" the line will be drawn.\n");

	printf("------------------------\n"); 
	putchar('\n'); 
	printf(" --- --- ---\n");
	printf("|            |\n");
	printf("|     o      | <- press 'o' !\n");
	printf("|            |\n"); 
	printf(" --- --- ---\n");
	putchar('\n');  
	printf("After the main shape is\n");
	printf("draw, there will be a prompt\n");
	printf("where you click a specific\n");
	printf("keystroke.\n");
	putchar('\n');
	printf("------------------------\n");

	system("pause");
	system("cls");

	printf("Accuracy:\n");
	printf("Wrong input will highlighted in" RED " RED" CRESET".\n");
	putchar('\n');
	printf("Right input: --- --- ---\n"); 
	putchar('\n');
	printf(" --- --- ---\n");
	printf("|            |\n");
	printf("|     o      | <- press 'o' !\n");
	printf("|            |\n");
	printf(" --- --- ---\n");
	putchar('\n');
	putchar('\n');
	printf("Wrong input: --- " RED "|" CRESET " ---\n"); 
	putchar('\n');
	printf(" --- --- ---\n"); 
	printf("|            |\n"); 
	printf("|     "RED"i"CRESET"      | <-press 'o' !\n");
	printf("|            |\n");
	printf(" --- --- ---\n"); 
	printf("------------------------\n");
	system("pause");
	system("cls");

	printf("Refer to the tutorial to get used to the controls! Happy drawing!\n");
	system("pause");

}
