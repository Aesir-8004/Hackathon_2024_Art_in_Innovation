
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
	printf("----- "); printf("----- "); printf("-----\n");
	printf("|"CYN"\\"CRESET"  |"); printf("|  "CYN"|"CRESET" |"); printf("|  "CYN"/"CRESET" |\n");
	printf("| "CYN"\\"CRESET" |"); printf("|  "CYN"|"CRESET" |"); printf("| "CYN"/"CRESET"  |\n");
	printf("----- "); printf("----- "); printf("-----\n");
	printf("----- "); printf("      "); printf("-----\n");
	printf("| "CYN"___"CRESET"|"); printf("      "); printf("|"CYN"___"CRESET" |\n");
	printf("|    |"); printf("      "); printf("|    |\n");
	printf("----- "); printf("      "); printf("----- \n");
	printf("----- "); printf("----- "); printf("-----\n");
	printf("|   "CYN"/"CRESET"|"); printf("|  "CYN"|"CRESET"  |"); printf("|"CYN"\\"CRESET"  |\n");
	printf("|  "CYN"/"CRESET" |"); printf("|  "CYN"|"CRESET"  |"); printf("| "CYN"\\"CRESET" |\n");
	printf("----- "); printf("----- "); printf("-----\n");
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
void start(Canvas theCanvas[], char symbol, char tutorial_arr[], char stage1_arr[], char stage2_arr[])
{
	int choise = 0;
	printf("0. Tutorial\n1. Stage 1\n2. Stage 2\n3. Create\n4. Menu\n");
	scanf("%d", &choise);

	switch (choise)
	{
	case 0:
		// Tutorial 
		system("cls");
		turtorialCanvas(theCanvas); 
		tutorial(theCanvas, tutorial_arr);
		break;
	case 1:
		// Stage 1
		stage_1(theCanvas, stage1_arr);
		break;
	case 2:
		// Stage 2
		stage_2(theCanvas, stage2_arr);
		break;
	case 3:
		// Create
		create_rules();
		stage_3(theCanvas);

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
	for (; first <= 3; first++)
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
	scanf(" %c", &user_input);
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
	theCanvas[1].canvasBoard[9][9] = 'O';

}


int stage_1(Canvas canvasBoard[], char answer[]) {
	printf("\033[0m");
	//holds what the user inputted
	char user[18] = { '\0' };

	// Start position
	int positionX = 4;
	int positionY = 15;

	// 1. initialize the userboard
	clearCanvas(canvasBoard, 0);

	// 2. Print canvas
	printCanvas(canvasBoard, 0);


	// 3. Tell the user what to press and get their input.
	//	  We will loop this until the end of the answer array.
	for (int index = 0; index < 18; index++)
	{
		printf("\033[0m");
		printf("click %c !", answer[index]);
		user[index] = ask_user_input();

		// check if they are the same or not
		if (answer[index] != user[index]) {// print in red
			printf("\033[1;31m");
		}
		else {//print in white
			printf("\033[0m");
		}
		print_user_position(user, &positionX, &positionY, index, canvasBoard);
		printf("\033[0m");
		//result

	}
}

/*
Intput:		1. user[]:		User's input for character array
			2. *positionX:	Pointer of x position
			3. *positionY:	Pointer of y position for where they currently are
			4. index:		index for which character is being used for the array

 Info:		It will increase or decrease it's position depending on the character's input.
			It will not let them go out of bound.
			If they try to write on top of where they already wrote, it will over write it

 Return:	None (But there will be pointers)
*/
void print_user_position(char user[], int* positionX, int* positionY, int index, Canvas canvasBoard[]) {
	int print = 0; //0 = no 1 = yes
	if (user[index] == 'Q') {
		if (*positionY <= 1 || *positionX <= 1) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionY -= 2;
			*positionX -= 2;
			print = 1;
		}
	}
	else if (user[index] == 'W') {
		if (*positionY <= 1) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionY -= 2;
			print = 1;
		}
	}
	else if (user[index] == 'E') {
		if (*positionY <= 1 || *positionX >= 18) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionY -= 2;
			*positionX += 2;
			print = 1;
		}
	}
	else if (user[index] == 'A') {
		if (*positionX <= 1) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionX -= 2;
			print = 1;
		}
	}
	else if (user[index] == 'D') {
		if (*positionX >= 18) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionX += 2;
			print = 1;
		}
	}
	else if (user[index] == 'Z') {
		if (*positionY >= 18 || *positionX <= 1) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionY += 2;
			*positionX -= 2;
			print = 1;
		}
	}
	else if (user[index] == 'X') {
		if (*positionY >= 18) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionY += 2;
			print = 1;
		}
	}
	else if (user[index] == 'C') {
		if (*positionY >= 18 || *positionX >= 18) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			*positionY += 2;
			*positionX += 2;
			print = 1;
		}
	}
	else if (user[index] == 'O') {
		if (index != 0) {
			print_user_position(user, positionX, positionY, index - 1, canvasBoard);
		}
		else if (index == 0) {
			*positionX += 2;
		}

		if (*positionY <= 1 || *positionY >= 18 || *positionX <= 0 || *positionX >= 19) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			print = 1;
		}
	}
	else {
		if (index != 0) {
			print_user_position(user, positionX, positionY, index - 1, canvasBoard);
		}
		else if (index == 0) {
			*positionX += 2;
		}

		if (*positionY <= 1 || *positionY >= 18 || *positionX <= 0 || *positionX >= 19) {// if it goes out of bound we will tell them they can't do that
			printf("You cannot go out of bound");
			print = 0;
		}
		else {// if not it will print
			print = 1;
		}
	}


	if (print = 1) {
		print_lines(user[index], *positionX, *positionY, canvasBoard);
	}

}


/*
Input:		1. user:		Current user's input character
			2. positionX:	Current position X
			3. positionY:	Current position Y
			4. canvasBoard:	Saves all the lines that user went through
			5. index:		Shows which index they are currently at in the array so it will know which character to print

Info:		Prints the line for what ever the user inputted.
			If it's something else than the QWEADZXC or O, it will print that character

Return:		None, just prints
*/
void print_lines(char user, int positionX, int positionY, Canvas canvasBoard[]) {

	//clear board
	system("cls");

	//canvasBoard[0] is where we save the user inputs
	if (user == 'Q') {// '\'
		canvasBoard[0].canvasBoard[positionY + 1][positionX + 1] = '\\';
		canvasBoard[0].canvasBoard[positionY][positionX] = '\\';

	}
	else if (user == 'W') {// '|'
		canvasBoard[0].canvasBoard[positionY + 1][positionX] = '|';
		canvasBoard[0].canvasBoard[positionY][positionX] = '|';

	}
	else if (user == 'E') {// '/'
		canvasBoard[0].canvasBoard[positionY + 1][positionX - 1] = '/';
		canvasBoard[0].canvasBoard[positionY][positionX] = '/';

	}
	else if (user == 'A') {// '_'
		canvasBoard[0].canvasBoard[positionY][positionX + 1] = '_';
		canvasBoard[0].canvasBoard[positionY][positionX] = '_';

	}
	else if (user == 'D') {// '_'
		canvasBoard[0].canvasBoard[positionY][positionX - 1] = '_';
		canvasBoard[0].canvasBoard[positionY][positionX] = '_';

	}
	else if (user == 'Z') {// '/'
		canvasBoard[0].canvasBoard[positionY - 1][positionX + 1] = '/';
		canvasBoard[0].canvasBoard[positionY][positionX] = '/';

	}
	else if (user == 'X') {// '|'
		canvasBoard[0].canvasBoard[positionY - 1][positionX] = '|';
		canvasBoard[0].canvasBoard[positionY][positionX] = '|';

	}
	else if (user == 'C') {// '\'
		canvasBoard[0].canvasBoard[positionY - 1][positionX - 1] = '\\';
		canvasBoard[0].canvasBoard[positionY][positionX] = '\\';

	}
	else if (user == 'O') {// 'O'
		canvasBoard[0].canvasBoard[9][9] = 'O';
	}
	else if (user == '*')

	{
		canvasBoard[0].canvasBoard[3][4] = '*';
		canvasBoard[0].canvasBoard[14][16] = '*';

	}
	else if (user == 'S')
	{
		
	}
	
		
	else {// prints what ever they input for example 'P'
		canvasBoard[0].canvasBoard[positionY][positionX] = user;
	}

	//print board
	printCanvas(canvasBoard, 0);
}
void tutorial(Canvas theCanvas[], char tutorial_arr[])
{
	printf("\033[0m");
	//holds what the user inputted
	char user[16] = { '\0' };

	// Start position
	int positionX = 7;
	int positionY = 2;

	// 1. initialize the userboard
	clearCanvas(theCanvas, 0);

	// 2. Print canvas
	printCanvas(theCanvas, 0);


	// 3. Tell the user what to press and get their input.
	//	  We will loop this until the end of the answer array.
	for (int index = 0; index < 16; index++)
	{
		printf("\033[0m");
		printf("click %c !", tutorial_arr[index]); 
		user[index] = ask_user_input();

		// check if they are the same or not
		if (tutorial_arr[index] != user[index]) 
		{// print in red 
			printf("\033[1;31m");
		}
		else {//print in white
			printf("\033[0m");
		}
		print_user_position(user, &positionX, &positionY, index, theCanvas);
		printf("\033[0m");
		//result

	}
}

void stage_2_canvas(Canvas theCanvas[])
{
	theCanvas[3].canvasBoard[6][2] = '_';
	theCanvas[3].canvasBoard[6][3] = '_';
	theCanvas[3].canvasBoard[6][4] = '_';
	theCanvas[3].canvasBoard[6][5] = '_';

	

	theCanvas[3].canvasBoard[6][6] = '/';
	theCanvas[3].canvasBoard[5][7] = '/';
	theCanvas[3].canvasBoard[4][8] = '/';
	theCanvas[3].canvasBoard[3][9] = '/';

	
	
	theCanvas[3].canvasBoard[3][10] = '\\';
	theCanvas[3].canvasBoard[4][11] = '\\';
	theCanvas[3].canvasBoard[5][12] = '\\';
	theCanvas[3].canvasBoard[6][13] = '\\';

	

	theCanvas[3].canvasBoard[6][14] = '_';
	theCanvas[3].canvasBoard[6][15] = '_';
	theCanvas[3].canvasBoard[6][16] = '_';
	theCanvas[3].canvasBoard[6][17] = '_';

	
	
	theCanvas[3].canvasBoard[8][17] = '/';
	theCanvas[3].canvasBoard[9][16] = '/';
	theCanvas[3].canvasBoard[10][15] = '/';
	theCanvas[3].canvasBoard[11][14] = '/';

	

	theCanvas[3].canvasBoard[12][13] = '|';
	theCanvas[3].canvasBoard[13][13] = '|';
	theCanvas[3].canvasBoard[14][13] = '|';
	theCanvas[3].canvasBoard[15][13] = '|';

	

	theCanvas[3].canvasBoard[16][13] = '\\';
	theCanvas[3].canvasBoard[15][12] = '\\';
	theCanvas[3].canvasBoard[14][11] = '\\';
	theCanvas[3].canvasBoard[13][10] = '\\';

	
	
	theCanvas[3].canvasBoard[13][9] = '/';
	theCanvas[3].canvasBoard[14][8] = '/';
	theCanvas[3].canvasBoard[15][7] = '/';
	theCanvas[3].canvasBoard[16][6] = '/';

	

	theCanvas[3].canvasBoard[15][6] = '|';
	theCanvas[3].canvasBoard[14][6] = '|';
	theCanvas[3].canvasBoard[13][6] = '|';
	theCanvas[3].canvasBoard[12][6] = '|';

	
	theCanvas[3].canvasBoard[11][5] = '\\';
	theCanvas[3].canvasBoard[10][4] = '\\';
	theCanvas[3].canvasBoard[9][3] = '\\';
	theCanvas[3].canvasBoard[8][2] = '\\';

	theCanvas[3].canvasBoard[3][4] = '*';
	theCanvas[3].canvasBoard[14][16] = '*';

	printCanvas(theCanvas, 3);
}

int stage_2(Canvas canvasBoard[], char answer[]) {
	printf("\033[0m");
	//holds what the user inputted
	char user[20] = { '\0' };

	// Start position
	int positionX = 2;
	int positionY = 6;

	// 1. initialize the userboard
	clearCanvas(canvasBoard, 0);

	// 2. Print canvas
	printCanvas(canvasBoard, 0);


	// 3. Tell the user what to press and get their input.
	//	  We will loop this until the end of the answer array.
	for (int index = 0; index < 20; index++)
	{
		printf("\033[0m");
		printf("click %c !", answer[index]);
		user[index] = ask_user_input();

		// check if they are the same or not
		if (answer[index] != user[index]) {// print in red
			printf("\033[1;31m");
		}
		else {//print in white
			printf("\033[0m");
		}
		print_user_position(user, &positionX, &positionY, index, canvasBoard);
		printf("\033[0m");
		//result

		

	}
}
void drawing_out_line(char board[][20], int row_size, int col_size, int row_choice, int col_choice, char symbol)
{
	
	if (symbol == '_')
	{

		if (row_choice >= 0 && row_choice < row_size && col_choice >= 0 && col_choice < col_size)
		{
			board[row_choice][col_choice] = symbol;
			board[row_choice][col_choice+1] = symbol;

		}
	}
	else if (symbol == '|')
	{

			if (row_choice >= 0 && row_choice < row_size && col_choice >= 0 && col_choice < col_size)
			{
				board[row_choice][col_choice] = symbol; 
				board[row_choice+1][col_choice] = symbol;  

			}
	}
	else if (symbol == '/')
	{
			if (row_choice >= 0 && row_choice < row_size && col_choice >= 0 && col_choice < col_size)
			{
				
					board[row_choice][col_choice] = symbol;
					board[row_choice][col_choice-1] = symbol; 

			}
	}
	else if (symbol == '\\')
	{
      	if (row_choice >= 0 && row_choice < row_size && col_choice >= 0 && col_choice < col_size)
			{
					board[row_choice][col_choice] = symbol;
					board[row_choice][col_choice+1] = symbol;

			}
	}


}

int stage_3(Canvas canvasBoard[]) 
{
	printf("\033[0m");
	//holds what the user inputted
	char user[200] = { '\0' };

	int positionX = 0;
	int positionY = 0;

	// Start position
	printf("Where do you want to start on the Canvas\n");
	printf("Input Y: ");
	scanf("%d", &positionY);
	printf("Input X: ");
	scanf("%d", &positionX);


	// 1. initialize the userboard
	clearCanvas(canvasBoard, 0);

	// 2. Print canvas
	printCanvas(canvasBoard, 0);


	// 3. Tell the user what to press and get their input.
	//	  We will loop this until the end of the answer array.
	for (int index = 0; index < 200; index++)
	{
		user[index] = ask_user_input();

		
		// check if they are the same or not
		if (user[index] == 'S')
		{
			break;
		}
		else {//print in white
			printf("\033[0m");
		}
		print_user_position(user, &positionX, &positionY, index, canvasBoard);
		printf("\033[0m");
		//result

	}
}
