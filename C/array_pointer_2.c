#include<stdio.h>
int main()
{
    char *name[4]={"Amit","Ammar","Ankit","Akhilesh"};
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}