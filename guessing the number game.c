#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	system("COLOR 0A");
	srand(time(0));
	int randomnumber=(rand()%100)+1, no_of_guesses=0, guessed;
	
	do{
		printf("\n guess the number=");
		scanf("%d",&guessed);
		if(guessed>randomnumber)
		{
			printf("LOWER NUMBER PLEASE!");
		}
		
		 else if(guessed<randomnumber)
		{
			printf("HIGHER NUMBER PLEASE!");
		}
		else
		{
			printf("======GAME OVER=====\n");
			printf("CONGRADULATION !!");
		}
		no_of_guesses++;
	}while(guessed !=randomnumber);
	
	printf("YOU GUESSED THE NUMBER in %d ATTEMPT",no_of_guesses);
	return 0;

}

