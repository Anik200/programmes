#include<stdio.h>
int main()
{
    int a[5] = { 2,4,6,5,3};
    int *p,i;
    p = a;
    for(i=0;i<5;i++)
    {
        printf("%d \n",*p);
        p = p+1;
    }
    return 0;
}
