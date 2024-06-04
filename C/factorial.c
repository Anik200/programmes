#include<stdio.h>
long int factorial(int n);
int main()
{
	int a; 
	printf("\n Input the number of which you want to find factorial: "); 
	scanf("%d",&a);
	printf("\n Factorial of %d = %ld",a,factorial(a));
	return 0;
}
long int factorial(int n)
{
	if(n==0)
	{
		return(1);
	}
	else
	{
		return(n*factorial(n-1));
	}
}