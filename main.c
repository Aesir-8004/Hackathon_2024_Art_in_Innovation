#include "header.h"

int main(void) 
{
	int menu_choice = 0; 
Canvas canvasBoard[10];
char symbol = ' ';
char tutorial_arr[] = {'D','D','C','C','X','X','Z','Z','A','A','Q','Q','W','W','E','O'};
char stage1_arr[18] = { 'W','W','W','E','C','X','D','W','E','C','X','X','X','A','A','A','A','A' }; 
char stage2_arr[] = { 'D','D','E','E','C','C','D','D','Z','Z','X','X','Q','Q','Z','Z','W','W','Q','*' };


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
		start(canvasBoard,symbol, tutorial_arr, stage1_arr, stage2_arr);
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


int line_choice = 0;

inital_coord_input(starting_point);
line_choice = dia_or_straight();

switch (line_choice)
{
case 1:
	drawing_out_line(canvas_board[][20], 20, 20, startingpoint.rows, startingpoint.cols, '-');
	break;
case 2: 
	drawing_out_line(canvas_board[][20], 20, 20, startingpoint.rows, startingpoint.cols, '|');
	break;
case 3: 
	drawing_out_line(canvas_board[][20], 20, 20, startingpoint.rows, startingpoint.cols, '/');
	break;
case 4: 
	drawing_out_line(canvas_board[][20], 20, 20, startingpoint.rows, startingpoint.cols, '\\');
	break;

default:
	printf("Error in input"); 
}

//done input -> do while
// ask if done after each point 



	return 0;
}
