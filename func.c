

#include"header.h"

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

int arr_length(char guide_array[])
{
// https://www.geeksforgeeks.org/length-of-array-in-c/

	int size = 0; 
	size = sizeof(guide_array) / sizeof(guide_array[0]);

	return size; 
}

void print_what_to_input(char guide_array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("click %c !", guide_array[i]); 
	}
}

char ask_user_input(void)
{
	char user_input = '\n';
	scanf("%c", &user_input); 
	return user_input; 
}

void check_mark(char canvas_array[][MAX_COL], char guide_array[], char input_array[], int length, Coords point) 
{
	
	for (int i = 0; i < length; i++)
	{
		input_array[i] = ask_user_input(); 

		if (input_array[i] == 'W') 
		{
			//vert 
			if (input_array[i] == guide_array[i])
			{ 
				update_mark(canvas_array, input_array, length, point);  
			}
			else
			{
				update_mark(canvas_array, input_array, length, point);
			}
		}
		else if (input_array[i] == 'A')
		{
			// hor
			if (input_array[i] == guide_array[i])
			{
				update_mark(canvas_array, input_array, length, point);
			}
			else
			{
				update_mark(canvas_array, input_array, length, point);
			}
		}
		else if (input_array[i] == 'Z') 
		{
			// vert
			if (input_array[i] == guide_array[i])
			{
				update_mark(canvas_array, input_array, length, point);
			}
			else
			{
				update_mark(canvas_array, input_array, length, point);
			}
		}
		else if (input_array[i] == 'D') 
		{
			// hor
			if (input_array[i] == guide_array[i])
			{
				update_mark(canvas_array, input_array, length, point);
			}
			else
			{
				update_mark(canvas_array, input_array, length, point);
			}
		}
		else if (input_array[i] == 'Q') 
		{
			//dia
			if (input_array[i] == guide_array[i])
			{
				update_mark(canvas_array, input_array, length, point);
			}
			else
			{
				update_mark(canvas_array, input_array, length, point);
			}
		}
		else if (input_array[i] == 'E') 
		{
			//dia
			if (input_array[i] == guide_array[i])
			{
				update_mark(canvas_array, input_array, length, point); 
			}
			else
			{
				update_mark(canvas_array, input_array, length, point); 
			}
		}
		else if (input_array[i] == 'X') 
		{
			//dia
			if (input_array[i] == guide_array[i])
			{
				update_mark(canvas_array, input_array, length, point); 
			}
			else
			{
				update_mark(canvas_array, input_array, length, point); 
			}
		}
		else if (input_array[i] == 'C') 
		{
			//dia
			if (input_array[i] == guide_array[i]) 
			{
				update_mark(canvas_array, input_array, length, point); 
			}
			else
			{
				update_mark(canvas_array, input_array, length, point);
			}
		}
	}

}

void update_mark(char canvas_array[][MAX_COL], char input_array[], int length, Coords point)
{
	for (int i = 0; i < length; i++)
	{

		if (input_array[i] == 'W')
		{
			// vert
			canvas_array[point.rows][point.cols] = '|'; 
			point.rows += 1;  
			canvas_array[point.rows][point.cols] = '|';
		}
		else if (input_array[i] == 'A')
		{
			// hor
			canvas_array[point.rows][point.cols] = '-';
			point.cols += 1;
			canvas_array[point.rows][point.cols] = '-';
		}
		else if (input_array[i] == 'Z')
		{
			// vert
			canvas_array[point.rows][point.cols] = '|';
			point.rows -= 1;
			canvas_array[point.rows][point.cols] = '|';
		}
		else if (input_array[i] == 'D')
		{
			// hor
			canvas_array[point.rows][point.cols] = '-';
			point.cols -= 1; 
			canvas_array[point.cols][point.rows] = '-';
		}
		else if (input_array[i] == 'Q')
		{
			//dia
			point.rows += 1;
			canvas_array[point.rows][point.cols] = '\\';
			point.rows -= 1;
			point.cols -= 1;
			canvas_array[point.cols][point.rows] = '\\';

		}
		else if (input_array[i] == 'E')
		{
			//dia
			point.rows += 1;
			canvas_array[point.rows][point.cols] = '/';
			point.rows -= 1;
			point.cols += 1;
			canvas_array[point.cols][point.rows] = '/';
		}
		else if (input_array[i] == 'X')
		{
			//dia
			point.cols += 1;
			canvas_array[point.rows][point.cols] = '/';
			point.cols -= 1;
			point.rows += 1; 
			canvas_array[point.cols][point.rows] = '/';
		}
		else if (input_array[i] == 'C')
		{
			//dia
			canvas_array[point.rows][point.cols] = '\\';
			point.rows += 1; 
			point.cols += 1;
			canvas_array[point.cols][point.rows] = '\\';

		}
	}
}
