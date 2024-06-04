#include<stdio.h>
int main()
{
    int x, *P1, **P2;
    x = 100;
    P1 = &x;
    P2 = &P1;
    printf("Value of x = %d \n",x);
    printf("Address of x = %d \n",&x);
    printf("Value of P1 = %d \n",P1);
    printf("Address of P1 = %u \n",&P1);
    printf("Value of P2 = %d \n",P2);
    printf("Printing value of x through P2 = %d \n",**P2);
    return 0;

}