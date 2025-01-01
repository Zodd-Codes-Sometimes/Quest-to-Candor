#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <windows.h>

int hp,dmg,class,hrecovery,difficulty;
void clear_screen() 
{
    printf("\033[H\033[J"); // ANSI escape code to clear the screen and move the cursor to the top
}
void delay(int seconds) 
{
    Sleep(seconds * 1000); // Sleep function takes milliseconds
}
void start()
{
	printf("\033[1;32mQuest to Candor\033[0m\n");
	printf("\n\nSelect The Difficulty:\n 1:Easy.\n 2:Medium \n 3:Hard\n Answer(Enter The Number Of Your Choice):");
	scanf("%d",&difficulty);
	system("cls");
	printf("Select Your Class:\n 1:Warrior.\n 2:Healer \n 3:Mage\n Answer(Enter The Number Of Your Choice):");
	scanf("%d",&class);
	if(difficulty==1)	// Setting Difficulty Level Using If Else For Character Stats DiffiCulty Level 1 Easy
	{
		switch(class) // Setting Character Class Using Switch Case For Character Stats
		{
			case 1:
			{
				hp=250;
				dmg=50;
				hrecovery=0;
				break;
			}
			case 2:
			{
				hp=170;
				dmg=70;
				hrecovery=30;
				break;
			}
			case 3:
			{
				hp=200;
				dmg=60;
				hrecovery=10;
				break;
				
			}
			default:
			{
				clear_screen();		//Calling Clear Screen Function To Clear The Screen
				error(); 	//Calling Error Function To Display Error
				start();	//Calling Start Function To Go Back Start Function
			}
		}
		
	}
	else if(difficulty==2)	// Setting Difficulty Level Using If Else For Character Stats DiffiCulty Level 2 Medium
	{
		switch(class)	// Setting Character Class Using Switch Case For Character Stats
		{
			case 1:
			{
				hp=250;
				dmg=50;
				hrecovery=0;
				break;
			}
			case 2:
			{
				hp=170;
				dmg=70;
				hrecovery=30;
				break;
			}
			case 3:
			{
				hp=200;
				dmg=60;
				hrecovery=10;
				break;
			}
			default:
			{
				clear_screen();		//Calling Clear Screen Function To Clear The Screen
				error(); 	//Calling Error Function To Display Error
				start();	//Calling Start Function To Go Back Start Function
			}
		}
		
	}
	else if(difficulty==3)	// Setting Difficulty Level Using If Else For Character Stats DiffiCulty Level 3 Hard
	{
		switch(class)	// Setting Character Class Using Switch Case For Character Stats
		{
			case 1:
			{
				hp=200;
				dmg=100;
				hrecovery=0;
				break;
			}
			case 2:
			{
				hp=150;
				dmg=100;
				hrecovery=20;
				break;
			}
			case 3:
			{
				hp=175;
				dmg=80;
				hrecovery=10;
				break;
			}
			default:
			{
				clear_screen();		//Calling Clear Screen Function To Clear The Screen
				error(); 	//Calling Error Function To Display Error
				start();	//Calling Start Function To Go Back Start Function
			}
		}
		
	}
	else{
		clear_screen();		//Calling Clear Screen Function To Clear The Screen
		error(); 	//Calling Error Function To Display Error
		start();	//Calling Start Function To Go Back Start Function
	}
	
	
	
}
int error(){
    printf("Error: Invalid input detected.\n");
    
}

void level_1 (void)
{
	printf("\n\n\nStarting level 1...");
    delay(10); // Delay for 10 seconds before clearing
    clear_screen();
}

int main()
{
  start();
  printf("\n\n");
  printf("Your Stats Are : \n HP:%d \n Damage per hit:%d \n Health Recovery %d",hp,dmg,hrecovery);
  level_1();

  return 0;
}
