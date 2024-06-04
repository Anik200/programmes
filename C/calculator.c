#include<stdio.h>
void main()
{
    int i,j,a,b,s;
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    printf("______Menu______ \n 1 for ADDITION \n 2 for SUBSTRACTION \n 3 for MULTIPLICATION \n 4 for DIVITION \n Enter your choice: ");
    scanf("%d",&i);
    switch(i)
    {
        case 1:s=a+b;
        break;
        case 2:s=a-b;
        break;
        case 3:s=a*b;
        break;
        case 4:s=a/b;
        break;
        default:printf("Wrong choice");
        break;
        
    }
    printf("The answer is %d ",s);
}   