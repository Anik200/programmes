#include<stdio.h>
int main()
{
    int *arr[4], a=8, b=6, c=7, d=4, i;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    for(i=0;i<4;i++)
    {
        printf("\nNumber = %d \n",*arr[i]);
    }
    return 0;
}
