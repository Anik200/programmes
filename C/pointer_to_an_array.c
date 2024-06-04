#include<stdio.h>
int main()
{
    int(*a)[5];
    int b[5] = {11,20,25,37,45};
    int i = 0;
    a = &b;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(*a+i));
    }
    return 0;
}