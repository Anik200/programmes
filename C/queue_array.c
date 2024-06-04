#include<stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
void store(int x);
int retrieve();
void main()
{
    int val, prompt;
    do{
        printf("\nPress 1 to STORE\nPress 2 to RETRIEVE\nPress 0 to END\n= ");
        scanf("%d",&prompt);
        switch(prompt)
        {
            case 1: printf("\nEnter value to store: ");
            scanf("%d",&val);
            store(val); break;
            case 2: printf("\nRetrieved value = %d",retrieve()); break;
            case 0: break;
        }
    }while(prompt!=0);
}
void store(int x)
{
    if(rear == MAX-1)
    {
        printf("\nQueue Overflow !\n");
        return;
    }
    if(rear == -1)
    {++front;}
queue[++rear] = x;
}
int retrieve()
{
    int val;
    if(front == -1)
    {
        printf("\nQueue Underflow");
        return 0;
    }
    val = queue[front];
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    ++front;
return val;
}