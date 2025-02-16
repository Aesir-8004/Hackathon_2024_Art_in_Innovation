
#include"header.h"

int menu(void)
{
	int choice = 0;
	printf("Inkspire\n");
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
	printf("Hello! Aren't you excited? Before we get into drawing, here is some control you need to know.\n");
putchar('\n');
printf("Main Controls:\n");
printf("------------------------\n");
printf("----- ");printf("----- ");printf("-----\n");
printf("|"CYN"\\"CRESET"  |");printf("|  "CYN"|"CRESET" |");printf("|  "CYN"/"CRESET" |\n");
printf("| "CYN"\\"CRESET" |");printf("|  "CYN"|"CRESET" |");printf("| "CYN"/"CRESET"  |\n");
printf("----- ");printf("----- ");printf("-----\n"); 
printf("----- ");printf("      ");printf("-----\n"); 
printf("| "CYN"___"CRESET"|");printf("      ");printf("|"CYN"___"CRESET" |\n");
printf("|    |");printf("      ");printf("|    |\n"); 
printf("----- ");printf("      ");printf("----- \n");
printf("----- ");printf("----- ");printf("-----\n");
printf("|   "CYN"/"CRESET"|");printf("|  "CYN"|"CRESET"  |");printf("|"CYN"\\"CRESET"  |\n"); 
printf("|  "CYN"/"CRESET" |");printf("|  "CYN"|"CRESET"  |");printf("| "CYN"\\"CRESET" |\n");  
printf("----- ");printf("----- ");printf("-----\n");
putchar('\n');
putchar('\n');
printf("      \\   /\n");
printf("       \\ /\n");
printf("        v\n");
putchar('\n');
putchar('\n');

printf("    [Q][W][E]\n");
printf("    [A][S][D]\n");
printf("    [X][Z][C]\n"); 
putchar('\n');
printf("Their is a corresponding\n"
	"keystroke with the direction\n"
	"the line will be drawn.\n");

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
printf("Wrong input: "RED" --- | --- "CRESET"\n");  
putchar('\n');
printf(RED"--- --- ---\n"); 
printf("|            |\n"); 
printf("|     i      | <-press 'o' !\n");
printf("|            |\n");
printf(" --- --- --- "CRESET"\n");
printf("------------------------\n");
system("pause");
system("cls");
	
printf("Refer to the tutorial to get used to the controls! Happy drawing!\n");
system("pause");
}
void start(Canvas theCanvas[], char symbol)
{
	int choise = 0;
	printf("0.Tutorial\n1.Stage 1\n2.Stage 2\n3.Create\n4.Menu");
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
		system("cls");
		printCanvas(theCanvas, 0);

		break;
	case 4:
		// Menu
		system("cls");
		break;
	default:
		printf("Error input");
		break;
	}
}
void createCanvas(Canvas theCanvas[], char symbol, int first)
{
	// 4 20x20array
	int row_index = 0, col_index = 0;
	for (;first<=3; first++) 
	{
		for (; row_index < 20; ++row_index) {
			for (col_index = 0; col_index < 20; ++col_index) {
				theCanvas[first].canvasBoard[row_index][col_index] = symbol;
			}
		}
		row_index = 0;
		col_index = 0; 
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
void clearCanvas(Canvas theCanvas[], int first)
{
	int row_index = 0, col_index = 0;
	for (; row_index < 20; ++row_index) 
	{
		for (col_index = 0; col_index < 20; ++col_index) {
			theCanvas[first].canvasBoard[row_index][col_index] = ' ';
		}
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
	return toupper(user_input);
}

void check_mark(char canvas_array[][20], char guide_array[], char input_array[], int length, Coords point)
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

void update_mark(char canvas_array[][20], char input_array[], int length, Coords point)
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

void createlvl_welcome_message(void)
{
	printf("Hey."); Sleep(1000); printf(" ."); Sleep(1000); printf(" ."); 
	putchar('\n');
	Sleep(2000);
	printf("You did pretty great with drawing there!\n"); 
	putchar('\n'); 
	Sleep(2000); 
	printf("Following the lines. . .\n");
	putchar('\n'); 
	Sleep(2000); 
	printf("or" RED " not" CRESET ".\n");
	putchar('\n'); 
	Sleep(2000); 
	printf("First I want to say sorry. . ."); 
	putchar('\n'); 
	Sleep(2000); 
	printf("I'm sorry for thinking you straying away from the outline was " RED "wrong." CRESET); 
	putchar('\n'); 
	Sleep(2000); 
	printf("There is no wrong in drawing! There never was");  
	putchar('\n');
	Sleep(2000);
	printf("Straying away from the rules. . .\n"); 
	putchar('\n'); 
	Sleep(2500);
	printf(GRN". . . only means you'll make something new\n"CRESET); 
	putchar('\n'); 
	Sleep(3000);
	printf("So go on! Draw new lines! Make new things!\n");   
	putchar('\n'); 
	Sleep(2000);
	printf("Because."); Sleep(1500); printf(" ."); Sleep(1500); printf(" .");
	putchar('\n');
	printf("That's the " RED "a" YLW "r" GRN "t" " " CYN "i" BLU "n" MAG "n" RED "o" YLW "v" GRN "a" CYN "t" BLU "i" MAG "o" RED "n" CRESET "\n"); 
	putchar('\n'); 
	Sleep(1000);
	printf(":)"); 
	putchar('\n');  
	putchar('\n'); 
	Sleep(2000); 
	printf("[Creative Mode is now unlocked]"); 
	
	
}

void create_rules(void)
{
	printf("You can make a straight or diagonal line to make your shape!\n");
	printf("Input how long you want your line to be and where you want your line to start.\n");
	printf("Happy drawing!\n");
}


int dia_or_straight(void)
{
	int result = 0;
	printf("Do you want to make a [1] straight line or [2] diagonal line\n");
	scanf("%d", &result); 
	return result; 

}
int how_long(void)
{
	int result = 0;
	printf("How long do you want to make the line?\n");
	printf("%d", &result);
	return result;   
}
void inital_coord_input(Coords starting_point)
{
	printf("Where do you want to starting point?\n"); 
	printf("X coord (1-20): ");
	scanf("%d", starting_point.cols);  
	printf("Y coord (1-20): ");
	scanf("%d", starting_point.rows); 

}
void turtorialCanvas(Canvas theCanvas[])
{
	theCanvas[1].canvasBoard[3][8] = '_';
	theCanvas[1].canvasBoard[3][9] = '_'; 
	theCanvas[1].canvasBoard[3][10] = '_';  
	theCanvas[1].canvasBoard[3][11] = '_'; 
	theCanvas[1].canvasBoard[4][12] = '\\'; 
	theCanvas[1].canvasBoard[5][13] = '\\'; 
	theCanvas[1].canvasBoard[6][14] = '\\'; 
	theCanvas[1].canvasBoard[7][15] = '\\'; 
	theCanvas[1].canvasBoard[8][15] = '|';
	theCanvas[1].canvasBoard[9][15] = '|';
	theCanvas[1].canvasBoard[10][15] = '|';
	theCanvas[1].canvasBoard[11][15] = '|';
	theCanvas[1].canvasBoard[12][15] = '/';
	theCanvas[1].canvasBoard[13][14] = '/';
	theCanvas[1].canvasBoard[14][13] = '/';
	theCanvas[1].canvasBoard[15][12] = '/';
	theCanvas[1].canvasBoard[15][11] = '_';
	theCanvas[1].canvasBoard[15][10] = '_';
	theCanvas[1].canvasBoard[15][9] = '_';
	theCanvas[1].canvasBoard[15][8] = '_';
	theCanvas[1].canvasBoard[15][7] = '\\';
	theCanvas[1].canvasBoard[14][6] = '\\';
	theCanvas[1].canvasBoard[13][5] = '\\';
	theCanvas[1].canvasBoard[12][4] = '\\';
	theCanvas[1].canvasBoard[11][4] = '|';
	theCanvas[1].canvasBoard[10][4] = '|';
	theCanvas[1].canvasBoard[9][4] = '|';
	theCanvas[1].canvasBoard[8][4] = '|';
	theCanvas[1].canvasBoard[7][4] = '/';
	theCanvas[1].canvasBoard[6][5] = '/';
	theCanvas[1].canvasBoard[5][6] = '/';
	theCanvas[1].canvasBoard[4][7] = '/';
	printCanvas(theCanvas, 1);

}
