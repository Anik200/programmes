#include<stdio.h>
#include<stdlib.h>
typedef struct record
{
    int value;
    struct record *next;
} 
STACKNODE;
STACKNODE *top = NULL;
void push(int x);
int pop();
int main()
{
    int val, prompt;
    do{printf("\nPress 1 To PUSH data\nPress 2 To POP data\nPress 0 To END\n =");
    scanf("%d",&prompt);
    switch(prompt)
{
    case 1: printf("\nEnter value to push:");
    scanf("%d",&val);
    push(val);
    break;
    case 2:
    printf("\nPopped value = %d",pop());
    break;
    case 0: break;
    default: printf("\nEnter Correct Choice");
}
} while(prompt!=0);
}

void push(int x)
{
    STACKNODE *temp;
    temp = (STACKNODE*)malloc(sizeof(STACKNODE));
if (temp == NULL)
{
    printf("\n!!! Stack Overflow !!!");
    return;
}   temp->value = x;
    temp->next = top;
    top = temp;
}
    int pop()
{   STACKNODE *temp;int val;
    if(top == NULL)
{
    printf("\n!!! Stack Underflow !!!");
    return 0;
}
val = top->value;
temp = top;
top = top -> next;
free(temp);
return val;
}