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
	printf("\n\nSelect The Difficulty:\n 1:Easy.\n 2:Medium \n 3:Hard\n Answer:");
	scanf("%d",&difficulty);
	system("cls");
	printf("Select Your Class:\n 1:Warrior.\n 2:Healer \n 3:Mage\n Answer:");
	scanf("%d",&class);
	if(difficulty==1)
	{
		switch(class)
		{
			case 1:
			{
				hp=250;
				dmg=50;
				hrecovery=0;
			}
			case 2:
			{
				hp=170;
				dmg=70;
				hrecovery=30;
			}
			case 3:
			{
				hp=200;
				dmg=60;
				hrecovery=10;
			}
		}
		
	}
	else if(difficulty==2)
	{
		switch(class)
		{
			case 1:
			{
				hp=250;
				dmg=50;
				hrecovery=0;
			}
			case 2:
			{
				hp=170;
				dmg=70;
				hrecovery=30;
			}
			case 3:
			{
				hp=200;
				dmg=60;
				hrecovery=10;
			}
			default:
			{
				printf("Invalid Choice");
			}
		}
		
	}
	else if(difficulty==3){
		switch(class)
		{
			case 1:
			{
				hp=200;
				dmg=100;
				hrecovery=0;
			}
			case 2:
			{
				hp=150;
				dmg=100;
				hrecovery=20;
			}
			case 3:
			{
				hp=175;
				dmg=80;
				hrecovery=10;
			}
			default:
			{
				printf("Invalid Choice");
			}
		}
		
	}
	
	
	
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
  printf("Your Stats Are : \n hp:%d \n Damage per hit:%d \n Health Recovery %d",hp,dmg,hrecovery);
  level_1();

  return 0;
}
