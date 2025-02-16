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
#define MAX_ROWS 20;
#define MAX_COLS 20;


#include <stdio.h>
#include <math.h>
#include <stdio.h>
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

void start(void); 
void createCanvas(Canvas theCanvas[], char symbol, int first);
void printCanvas(Canvas theCanvas[], int first); 


// Menu -> Settings
void setting();

int volume();

// Game Stages


int turtorial();


int stage_1();

int stage_2();

int stage_3();


// Game -> Functions

int resultCompare();







#endif
