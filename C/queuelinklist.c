/*Program-64:Implementing a QUEUE using a LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>
typedef struct record
{
    int value;
    struct record *next;
} 
QUEUENODE;
QUEUENODE *front=NULL,*rear=NULL ;
void store(int x);
int retrieve();
int main()
{ 
    int val, prompt;
    do
	{printf("\nPress  1  To STORE data\nPress  2  To RETRIEVE data\nPress  0  To END\nYour choice: ");
    scanf("%d",&prompt);
    switch(prompt)
{
	case 1: printf("\nEnter value to store: ");
			scanf("%d", &val);
			store(val);
	break;
	case 2: printf("\nRetrieved Value = %d",retrieve());
	break;
	case 0: 
	break;
	default: printf("\nEnter correct choice: ");
}
}
while (prompt!=0);}
void store (int x)
{
    QUEUENODE *temp;
    temp = (QUEUENODE*)malloc(sizeof (QUEUENODE));
    if(temp == NULL)
{	printf("\nQueue Overflow");
	return;
}
temp->value = x;
temp->next = NULL;
if (rear == NULL)
{ 
	front = temp;rear = temp;
}

else

     rear->next = temp;
     rear = rear->next;

}
   int retrieve()
{
    QUEUENODE *temp;
    int val;
    if(front == NULL)
    {
	
    printf("\nQueue Underflow");
    return 0;
	}  
    val = front->value;
    temp = front;
    if(front == rear)
	{
    front = NULL;
    rear = NULL;
	}
    else
    {
    front = front->next;
    }
free(temp);
return val;
}
