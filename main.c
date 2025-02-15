#include "header.h"

int main(void) 
{
	int menu_choice = 0; 
	menu_choice = menu();  

		switch (menu_choice)
		{
		case 1: // rules 
			system("cls"); 
			print_rules();
			system("cls"); 
			menu();
			break;
		case 2: // settings
			system("cls"); 
			menu();
			break;
		case 3:
			system("cls");  
			//start
			// display level choice, tut 1 2 3 
		case 4:
			//exit
			break;
		default:
			printf("Error input");
			break;
		
		}

	return 0;
}
