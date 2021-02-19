#include<stdio.h>//write a program to read marks from keyboard and your program should display equivalent grade according to following table(if else ladder)
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("\nEnter marks between 0-100:\n");
	scanf("%d",&marks);
	if(marks>100 || marks<0)
	{
		printf("\n Your input is out of range");
	}
	else if(marks>=80)
	{
		printf("Distinction.");
	}
	else if(marks>=60)
	{
		printf("First class.");
	}
	else if(marks>=40)
	{
		printf("Second class.");
	}
	else
	{
		printf("\n sorry... You are fail");
	}
	getch();
}