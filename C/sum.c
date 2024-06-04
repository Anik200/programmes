#include<stdio.h>
int main()
{
	char n, Anik;
	printf("enter your name(standard style) ->");
	scanf("%c",&n);
	if(n == Anik)
	{
		printf(“\033[0;31m”);
		printf("hello world \n");
	}
	else
	{
		printf("You are the Admin \nAccess Granted \nWelcome !.... \n");
		
	}
	return 0;

}