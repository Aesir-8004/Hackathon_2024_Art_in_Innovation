

#include"Header.h"

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
void start(Canvas theCanvas[], char symbol)
{
	int choise = 0;
	printf("0.Tutorial\n1.Stage 1\n2.Stage 2\n3.Create\nMenu");
	scanf("%d", &choise);

	switch (choise)
	{
	case 0:
		// Tutorial 
		system("cls");
		printCanvas(theCanvas, 0);
		break;
	case 1:
		// Stage 1
		break;
	case 2:
		// Stage 2
		break;
	case 3:
		// Create
		break;
	case 4:
		// Menu
		system("cls"); 
		menu();
		break;
	default:
		printf("Error input"); 
		break;
	}
}
void createCanvas(Canvas theCanvas[], char symbol, int first)
{
	//20x20array
	int row_index = 0, col_index = 0;
	for (; row_index < 20; ++row_index) {
		for (col_index = 0; col_index < 20; ++col_index) {
			theCanvas[first].canvasBoard[row_index][col_index] = symbol;
		}
	}

}
void printCanvas(Canvas theCanvas[], int first)
{
	int row_index = 0, col_index = 0;

	printf("%5d%3d%3d%3d%3d%3d%3d%3d%3d%3d%4d%3d%3d%3d%3d%3d%3d%3d%3d%3d\n", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19);
	for (row_index = 0; row_index < 20; ++row_index) 
	{
		// Print the row number
		printf("%-4d", row_index);

		for (col_index = 0; col_index < 20; ++col_index) 
		{
			// Print each cell in the row
			printf("%-3c", theCanvas[first].canvasBoard[row_index][col_index]);
		}
		putchar('\n');
	}
}
