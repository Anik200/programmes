#include <stdio.h>
int main()
{
    int a = 7;
    float b = 7.6;
    void *p;
    p = &a;
    printf("Interger Variable is = %d", *(int *)p);
    p = &b;
    printf("\n Float Variable is = %f", *(float *)p);
    return 0;
}