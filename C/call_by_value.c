//Page 83
#include<stdio.h>
void SquareByVal(int a);
void SquareByRef(int *pa);
int main()
{
    int x;
    printf("\nEnter value of x: ");
    scanf("%d",&x);
    SquareByVal(x);
    printf("\nValue of x after call by value = %d",x);
    SquareByRef(&x);
    printf("\nValue of x after call by reference = %d",x);
    return 0;
}
void SquareByVal(int a)
{ 
    a = a*a;
}
void SquareByRef(int *pa)
{ 
    *pa = (*pa)*(*pa);
}