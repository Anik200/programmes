#include<stdio.h>
int main()
{
	int *p,x,m,n,*r1,y;
	//x = 10;
	p = &x;
	//y = *p;
	printf("p=%u \n",p);
	printf("x=%d \n",x);
	printf("y=%d \n",y);
	/* *p = 20;
	x=15;
	printf("\n*p=%d \n",*p);
	printf("x=%d \n",x);
	printf("y=%d \n",y); */
	return 0;
}