
#ifndef HEADER_H
#define HEADER_H
#define _CRT_SECURE_NO_WARNINGS
#define RED "\x1b[31m"
#define GRN "\x1b[32m"
#define YLW "\x1b[33m"
#define BLU  "\x1b[34m"
#define MAG "\x1b[35m"
#define CYN  "\x1b[36m"
#define CRESET "\x1b[0m"
#define MAX_ROW 20;
#define MAX_COL 20;


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct coords
{
	int rows, cols;
}Coords;
typedef struct markers
{
	Coords location;

}Markers;
typedef struct canvas
{
	char canvasBoard[20][20];
	Markers M;


}Canvas;

// Menu 
int menu(void);

void print_rules(void);

void start(Canvas theCanvas[], char symbol, char tutorial_arr[], char stage1_arr[], char stage2_arr[]);
void createCanvas(Canvas theCanvas[], char symbol, int first);
void printCanvas(Canvas theCanvas[], int first);
void clearCanvas(Canvas theCanvas[], int first);


// Menu -> Settings
//void setting();

//int volume();

// Game Stages


void turtorialCanvas(Canvas theCanvas[]); 

void tutorial(Canvas theCanvas[], char tutorial_arr[]);
 
int stage_1(Canvas canvasBoard[], char answer[]); 


int stage_2(Canvas canvasBoard[], char answer[]);


int create();

// Game -> Functions

int resultCompare();

//updates the canvas + user input
int arr_length(char guide_array[]);

void print_what_to_input(char guide_array[], int length);

char ask_user_input(void);

void check_mark(char canvas_array[][20], char guide_array[], char input_array[], int length, Coords point);

void update_mark(char canvas_array[][20], char input_array[], int length, Coords point); 

void createlvl_welcome_message(void);
void create_rules(void);
int dia_or_straight(void);
void inital_coord_input(Coords starting_point);
void print_user_position(char user[], int* positionX, int* positionY, int index, Canvas canvasBoard[]);
void print_lines(char user, int positionX, int positionY, Canvas canvasBoard[]);

void stage_2_canvas(Canvas theCanvas[]);
void turtorialCanvas(Canvas theCanvas[]);






#endif
