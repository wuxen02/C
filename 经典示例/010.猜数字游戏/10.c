#include <stdio.h>
#include<stdlib.h>//#include <conio.h>
int  main(void)
{
	int Password = 0, Number = 0, price = 58, i = 0;
	system("cls");//clrscr();
	printf("\n====This is a Number Guess Game!====\n");
	while (Password != 1234)
	{
		if (i >= 3)
			return 0;
		i++;
		puts("Please input Password: ");
		scanf_s("%d", &Password);
	}

	i = 0;
	while (Number != price)
	{
		do {
			puts("Please input a number between 1 and 100: ");
			scanf_s("%d", &Number);
			printf("Your input number is %d\n", Number);
		} while (!(Number >= 1 && Number <= 100));
		if (Number >= 90)
		{
			printf("Too Bigger! Press any key to try again!\n");
		}
		else if (Number >= 70 && Number < 90)
		{
			printf("Bigger!\n");
		}
		else if (Number >= 1 && Number <= 30)
		{
			printf("Too Small! Press any key to try again!\n");
		}
		else if (Number > 30 && Number <= 50)
		{
			printf("Small! Press any key to try again!\n");
		}
		else
		{
			if (Number == price)
			{
				printf("OK! You are right! Bye Bye!\n");
			}
			else if (Number < price)
			{
				printf("Sorry,Only a little smaller! Press any key to try again!\n");

			}
			else if (Number > price)
				printf(" Sorry, Only a little bigger! Press any key to try again!\n");
		}
		//system("pause");//getch();
	}
	system("pause");
	return 0;
}