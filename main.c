#include "header.h"

int main(void) 
{
	int menu_choice = 0; 
Canvas canvasBoard[10];
char symbol = ' ';
char tutorial_arr[] = { 'e','d','c','z','x','a','q','w','o' };
char stage1_arr[] = { 'e','c','z','d','w','e','c','z','z','z','z','z','a','a','a','a','a','w','w','w','w','w','>','<' }; 
char stage2_arr[] = { 'd','e','c','d','x','z','q','x','z','q','x','w','q','*','*' };


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
