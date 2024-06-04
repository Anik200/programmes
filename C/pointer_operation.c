#include<stdio.h>
int main()
{
	int m,n,*r1,*r2,a,b,c;
	m=15;
	n=5;
	r1=&m;
	r2=&n;
	a=*r1**r2-5;
	b=5*-*r2 / *r1 +10;
	printf("Address of m=%u\n",r1);
	printf("Address of n=%u\n",r2);
	printf("\n");
	printf("\nm=%d,n=%d",m,n);
	printf("\na= %d,b= %d",a,b);
	*r2=*r2+2;
	*r1=*r2-4;
	c=*r1**r2-5;
	printf("\nm=%d,n=%d",m,n);
	printf("c=%d\n",c);
	return 0;
}