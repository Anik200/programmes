#include<stdio.h>
int main()
{
    int x = 5,a = 3,z;
    float y = 2.0;
    z = x + a;
    printf("y = %f \n",y);
    y = (float)z/x;
    printf("y = %f \n",y);
    return 0;
}