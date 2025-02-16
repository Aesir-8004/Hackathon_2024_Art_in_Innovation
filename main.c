#include "header.h"

int main(void) 
{
	int menu_choice = 0; 
Canvas canvasBoard[10];
char symbol = '-';


createCanvas(canvasBoard, symbol, 0);

do
{ 
	menu_choice = menu();


	switch (menu_choice)
	{
	case 1: // rules 
		system("cls");
		print_rules();
		system("cls");
		break;
	case 2: // settings
		system("cls");
		break;
	case 3:
		system("cls");
		start(canvasBoard,symbol);
		// display level choice, 
	case 4:
		//exit
		break;
	default:
		printf("Error input\n");
		break;

	}

	if (menu_choice == 0)
	{
		printf("Catatsrophic Error!\n ");
		break;
	}

} while (menu_choice != 4);






	return 0;
}
