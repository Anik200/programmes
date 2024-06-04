/*Implementing a STACK using an ARRAY*/
#include<stdio.h>
#define MAX 10
int stack[MAX],top = -1;
void push(int x);
int pop();
int main()
{
    int val, prompt;
    do 
    {
        printf("\nPress 1 To PUSH data\nPress 2 To POP data\nPress 0 To END\n>");
        scanf("%d",&prompt);
        switch(prompt)
        {
            case 1: printf("\nEnter value to PUSH\n>");
            scanf("%d",&val);
            push (val);
            break;
            case 2: printf("\nPopped value = %d", pop());
            break;
            case 0: break;
            default: printf("\nEnter corrent choice");

        }
    }while(prompt!=0);
}
void push(int x)
{
    if(top == MAX-1)
    {
        printf("\n!!! Stack Underflow !!!");
    }
    else
    {
        stack[++top] = x;
    }
}
int pop()
{
    if(top == -1)
    {
        printf("\n!!! Stack Overflow !!!");
        return 0;
    }
  else
    {
        return stack[top--];
    }
}

